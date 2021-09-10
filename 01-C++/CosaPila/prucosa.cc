#include "cosa.cc"

int main(){
  cosa c1,c2;
  cout<<"Ingrese dos cosas "<<endl;
  cin>>c1>>c2;
  cout<<"c1="<<c1<<endl;
  cout<<"c2="<<c2<<endl;
  cout<<"c1<c2?->"<<boolalpha<<(c1<c2)<<endl;
  cout<<"c1.esMenorAlfaQue(c2) "
    <<boolalpha<<c1.esMenorAlfaQue(c2)<<endl;
  
}