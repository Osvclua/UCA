#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <signal.h> 

using namespace std;
typedef void (*sighandler_t)(int);
int vuelta=0;

void trata_sen(int nro){
 static int cant=0;
	cout<<endl<<"Recibido la signal "<<nro<<endl;
	cout<<"en total son "<<++cant<<" veces"<<endl;
	vuelta=0;
	if (nro==SIGQUIT) exit(0);
}

int main(){
  int apoliyo=3;
  int pase=0;
  if (signal(SIGQUIT,trata_sen)==SIG_ERR){
		perror(" no toma el signal(SIGQUIT,...)");
		exit(1);}
	if (signal(SIGHUP,trata_sen)==SIG_ERR){
		perror(" no toma el signal(SIGHUP,...)");
		exit(1);}
  if (signal(SIGTERM,trata_sen)==SIG_ERR){
		perror(" no toma el signal(SIGTERM,...)");
		exit(1);}
  while (true){
	if (vuelta==0) sleep (apoliyo);
		cout<<"\rProceso nro "<<getpid()<<" vuelta "<<vuelta++<<" pase="<<pase;
	if (vuelta == 100000){
		vuelta=0; pase++;
		cout<<endl;
		}
	}
}

