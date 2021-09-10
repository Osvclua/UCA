#include <iostream>
#include "Cosa.h"
using namespace std;

int main(){
  Cosa* cp;
  int n;
  cout<<"¿Cuantas cosas queres?"<<endl;
  cin>>n;
  cp=new Cosa [n];
  for (int i=0; i<n;i++){
    cin>>cp[i];
    cout<<"("<<cp[i]<<")"<<endl;
  }
  delete [] cp;
}