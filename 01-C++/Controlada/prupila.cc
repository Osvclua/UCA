#include <iostream>
#include "Pila.h"
using namespace std;
 
int main(){
  Cosa * cp;
  Pila p;
  cp=new Cosa;
  while (cin>>(*cp)){
    p.push(cp);
    cp=new Cosa;
  }
  while (!p.vacia()){
    cp=p.pop();
    cout<<"Sacado ("<<(*cp)<<")"<<endl;
  }
}
    