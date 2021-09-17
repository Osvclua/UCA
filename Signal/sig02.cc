#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <signal.h> 

using namespace std;
typedef void (*sighandler_t)(int);
int vuelta=0;

void trata_sen_term(int nro){
 static int cant=0;
	cout<<endl<<"Term  "<<nro<<endl;
	vuelta++;
}
void trata_sen_term1(int nro){
 static int cant=0;
	cout<<endl<<"Term1  "<<nro<<endl;
	vuelta++;
}
void trata_sen_hup(int nro){
 static int cant=0;
	cout<<endl<<"Hup "<<nro<<endl;
}
void trata_sen(int nro){
 static int cant=0;
	cout<<endl<<"Quit "<<nro<<endl;
	if (nro==SIGQUIT) exit(0);
}


int main(){
  int ant=0;
  sighandler_t viejo_signal;
  if (signal(SIGQUIT,trata_sen)==SIG_ERR){
		perror(" no toma el signal(SIGQUIT,...)");
		exit(1);}
  if (signal(SIGHUP,trata_sen_hup)==SIG_ERR){
		perror(" no toma el signal(SIGHUP,...)");
		exit(1);}
  if (signal(SIGTERM,trata_sen_term)==SIG_ERR){
		perror(" no toma el signal(SIGTERM,...)");
		exit(1);}
  while (true){
			cout<<"\rProceso nro "<<getpid()<<endl;
			pause();
			cout<<"vuelta="<<vuelta<<endl;
			if (vuelta!=ant){
				ant=vuelta;
				if (vuelta==1)  
					{if ((viejo_signal=signal(SIGTERM,trata_sen_term1))==SIG_ERR){perror(" no toma el signal(SIGTERM,...)");
						exit(1);}
					}
					else {
						 sighandler_t aux;
						 if ((aux=signal(SIGTERM,viejo_signal))==SIG_ERR)
								{perror(" no toma el signal(SIGTERM,...)");
							exit(1);}
						 viejo_signal=aux;
					 	}
  				}
			}
}

