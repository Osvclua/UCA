#include "cosaCont.h"

int main(){
  cosaCont cc;
  cosa c;
  cout<<"Ingrese una cosa "<<endl;
  while (cin>>c){
    cc.putCosa(c);
    cout<<"Ingrese una cosa "<<endl;
  }
  cout<<"El container tiene:"<<endl;
  cc.impCont();
  cosa c1;
  c1=cc.minCosa();
  cout<<"El minimo es "<<c1<<" y esta en el container "<<
      boolalpha<<cc.estaCosa(c1)<<endl;
}