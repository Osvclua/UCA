#include <csignal>
#include <cstdlib>
#include <unistd.h>
#include <iostream>
using namespace std;

int main(){
	/* prueba de uso de las sigsetops */
	sigset_t conj;
	int ret;
	ret= sigemptyset(&conj);
	if (ret==-1) {perror ("al inicializar el conj");exit(1);}
	ret=sigaddset(&conj, SIGQUIT);
	if (ret==-1) {perror ("al poner SIGQUIT en el conj");exit(1);}
	ret=sigaddset(&conj, SIGHUP);
	if (ret==-1) {perror ("al poner SIGHUP en el conj");exit(1);}
	cout<<"¿SiGQUIT es miembro de conj? "<<boolalpha<<
			(sigismember(&conj,SIGQUIT)==1)<<endl;
	cout<<"¿SiGINT es miembro de conj? "<<boolalpha<<
			(sigismember(&conj,SIGINT)==1)<<endl;
	cout<<"¿SiGHUP es miembro de conj? "<<boolalpha<<
			(sigismember(&conj,SIGHUP)==1)<<endl;
	cout<< "Saco SIGHUP"<<endl;
	ret=sigdelset(&conj, SIGHUP);
	if (ret==-1) {perror ("al sacar SIGHUP en el conj");exit(1);}
	cout<<"¿SiGHUP es miembro de conj? "<<boolalpha<<
			(sigismember(&conj,SIGHUP)==1)<<endl;
	cout<<"Lleno todo el conjunto"<<endl;
	ret=sigfillset(&conj);
	cout<<"¿SiGQUIT es miembro de conj? "<<boolalpha<<
			(sigismember(&conj,SIGQUIT)==1)<<endl;
	cout<<"¿SiGINT es miembro de conj? "<<boolalpha<<
			(sigismember(&conj,SIGINT)==1)<<endl;
	cout<<"¿SiGHUP es miembro de conj? "<<boolalpha<<
			(sigismember(&conj,SIGHUP)==1)<<endl;
}
