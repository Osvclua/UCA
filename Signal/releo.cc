#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <signal.h>
#include <string> 
#include <fstream>



using namespace std;
typedef void (*sighandler_t)(int);
bool reini;

void inicializa(string & val){
	ifstream  entra ("releo.rc");
	entra>>val;
	entra.close();
}

void trata_sen(int nro){
	cout<<endl<<"Recibido la signal "<<nro<<endl;
	if (nro==SIGHUP) {
		reini=true; 
		}
	if (nro==SIGQUIT) exit(0);
  if (nro==SIGTERM);
}

int main(int argc, char* argv[]){
	 if (signal(SIGQUIT,trata_sen)==SIG_ERR){
			cerr<<" no toma el signal(SIGQUIT,...)"<<endl;
			exit(1);}
		if (signal(SIGHUP,trata_sen)==SIG_ERR){
			cerr<<" no toma el signal(SIGHUP,...)"<<endl;
			exit(1);}
   if (signal(SIGTERM,trata_sen)==SIG_ERR){
		perror(" no toma el signal(SIGTERM,...)");
		exit(1);}

	string  val;
	reini=false;
	string nom("");
	nom="Reini-"+to_string(getpid());
	inicializa(val);
	while (true){
		cout<<nom<<" "<<"val="<<val<<endl;
		pause();
		if (reini) {
				inicializa(val);
				reini=false;
		}
	}
	cout<<nom<<" termina-"<<endl;
}
