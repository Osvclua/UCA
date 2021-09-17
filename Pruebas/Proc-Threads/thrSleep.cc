#include <pthread.h>
#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include<sys/wait.h>
#include <cstdio>
using namespace std;


void *func(void *arg){
    cout<<"proceso "<<getpid()<<" thread "<<gettid()
      <<" durmiendo (sleep()) "<<endl;
	sleep(1200);
    return NULL;
}
int main(){
  pthread_t th1,th2;
      
  pthread_create(&th1,NULL,func,NULL);
  pthread_create(&th2,NULL,func,NULL);
    cout<<"proceso "<<getpid()<<" thread "<<gettid()<<endl;
    
  pthread_join(th1,NULL);
  pthread_join(th2,NULL);	
}