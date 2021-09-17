//                  demon.cc
#include<unistd.h>
#include<iostream>
#include<sys/wait.h>
#include <cstdlib>
#include <cstdio>

using namespace std;

void espera(){
    int status;
	daemon(1,1);  //daemon(nochdir, noclose)  args!= 0 no cambia a / ni hace stdout=/dev/null
    cout<<"proceso "<<getpid()<<" durmiendo (sleep()) "<<endl;
	sleep(1200);

    //wait(&status);
}

int main(){
pid_t hijo;
  switch (hijo=fork()) {
	case -1: {cout << "Error al lanzar el proceso ";exit(3);}
	case 0: { // hijo
		cout << "El hijo pid nro "<<getpid()<<" espera"<<endl;
        espera();
		exit (0);}	
	default: { // padre
		cout << "El padre pid nro "<<getpid()<<" duerme"<<endl;
		sleep(1200);
		exit(0);}
	}
}
