//                    thread/thr1.cc
#include <pthread.h>
#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <cstdio>
using namespace std;

// En Linux, este codigo indica que cada thread es en
// realidad un proceso separado (esta implementado con clone)
// en Kernel 2.4 los pid son distintos, en Kernel 2.6 son
//iguales
// compilar con -lpthread.

void *func(void *arg){
  cout <<"soy la thread gettid()->"<<gettid();
  cout <<" pertenezco al proceso getpid() "<<getpid()<<endl;
  sleep (1200);
  return NULL;
}
int main(){
  pthread_t t,t1;
  cout << "Soy el proceso principal getpid()->"<<getpid();
  cout <<" y mi thread es  gettid()->"
    <<gettid()<<endl;
  pthread_create(&t,NULL,func,NULL);
  pthread_create(&t1,NULL,func,NULL);

  pthread_join(t,NULL);
  pthread_join(t1,NULL);
}
