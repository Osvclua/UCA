/*               lanza.cc   */
#include<unistd.h>
#include<iostream>
#include<sys/wait.h>
#include <cstdlib>
#include <cstdio>
using namespace std;

const char *env_init[] = { "USER=yo",  NULL };

int main(){
 	  	/* especificar pathname y ambiente */
		cout<<"Antes del exec pid= "<<getpid()<<endl;
	  if (execle("./arg","arg", "argumento1",
		   "argumento2", (char *) 0,env_init) < 0)
		{perror("Error en execle");exit(1);}
	cout<<"Esta linea no se ejecuta (si todo anduvo bien)"<<endl;
}
