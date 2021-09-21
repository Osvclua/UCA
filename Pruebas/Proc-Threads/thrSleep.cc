#include <pthread.h>
#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include<sys/wait.h>
#include <cstdio>
#include <fstream>
using namespace std;
int sali;

void *cuenta(void *arg) {
  extern int sali;
  ofstream fsali("/dev/pts/"+to_string(sali));
  fsali<<"Proceso "<<getpid()<<" thread "<<gettid()<<endl;
      for (int i=1;i<6000;i++){
        fsali<<"\r Proceso "<<getpid()<<" thread "<<gettid()<<
          " vuelta "<<i;
        if (i==5999) i=1;
      }
  return NULL;
}

void *func(void *arg){
    cout<<"proceso "<<getpid()<<" thread "<<gettid()
      <<" durmiendo (sleep()) "<<endl;
	sleep(1200);
    return NULL;
}
int main(int argc, char * argv[]){
  if (argc<2){
    cerr<<"Uso: "<<argv[0]<<" <terminal para thread>"<<endl;
    exit(2);
  }
  extern int sali;
  sali=atoi(argv[1]);
  pthread_t th1,th2;
      
  pthread_create(&th1,NULL,func,NULL);
  pthread_create(&th2,NULL,cuenta,NULL);
    cout<<"proceso "<<getpid()<<" thread "<<gettid()<<endl;
    
  pthread_join(th1,NULL);
  pthread_join(th2,NULL);	
}