using namespace std;
#include "fraccion.h"

void fraccion::simplificar(){
  int m=mcd(numerador,denominador);
  numerador=numerador/m;
  denominador=denominador/m;
}

fraccion::fraccion(){
  numerador=0; denominador=1;
}
fraccion::fraccion(int n,int d){
  if (d ==0) {
     numerador=0; denominador=1;
  }
  else{
      numerador=n; denominador=d;
      simplificar();
  };
  if (denominador < 0) {
    denominador=-denominador;
    numerador=-numerador;
  }
}

fraccion fraccion::operator+(fraccion f){
  return fraccion(numerador*f.denominador+f.numerador*denominador,
		  denominador*f.denominador);
}

bool fraccion::operator<(fraccion f){  
  float este=static_cast<float>(numerador)/static_cast<float>(denominador);
  float efe=static_cast<float>(f.numerador)/static_cast<float>(f.denominador);
  return este<efe;
}

ostream& operator<<(ostream&os, fraccion f){
  return os<<f.numerador<<"/"<<f.denominador;
}
// (cout<<a)<<b
// cin>> a  (1/7)
istream& operator>>(istream& is, fraccion& f){
  string tmp;
  is>>tmp;
  int posb=tmp.find_first_of("/");
  int nume=atoi(tmp.substr(0,posb).c_str());
  int deno=atoi(tmp.substr(posb+1).c_str());
  f=fraccion(nume,deno);
  return is;
}


  