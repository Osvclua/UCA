#include <iostream>
#include "Pila2.h"
using namespace std;
 
int main(){
  Cosa  c;
  Pila p;
  while (cin>>c){
    p.push(c);
  }
  while (!p.vacia()){
    c=p.pop();
    cout<<"Sacado ("<<c<<")"<<endl;
  }
}
    