#include <iostream>   // import lo incluye a menos que se haya incluido antes
#include <cstdlib>
#include <unistd.h>
#include <csignal> 
/* el ejmplo anterior con posix*/

using namespace std;

void trata_sen(int nro){
 static int cant=0;
	cout<<endl<<"Recibido la signal "<<nro<<endl;
	cout<<"en total son "<<++cant<<" veces"<<endl;
	if (nro==SIGQUIT) exit(0);
}

int main(){
	int ret=0,vuelta=1;
	sigset_t conj,conjViejo;
	sigfillset(&conj);
	sigdelset(&conj,SIGQUIT);   
	sigdelset(&conj,SIGHUP);    
	struct sigaction nueva, vieja;
	nueva.sa_handler=&trata_sen;
	ret=sigaction(SIGQUIT,&nueva,&vieja);
	ret=sigaction(SIGHUP,&nueva,&vieja);
	ret=sigprocmask(SIG_BLOCK,&conj,&conjViejo);
	cout<<"Proceso nro "<<getpid()<<" vuelta "<<vuelta++<<endl;
	while (vuelta<100000){
		pause();  //se detiene hasta recibir la signal
		cout<<"\rProceso nro "<<getpid()<<" vuelta "<<vuelta++;
		}
	cout<<endl;
}
