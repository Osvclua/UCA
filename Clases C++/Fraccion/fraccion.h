#ifndef _fraccion_
#define _fraccion_
#include <iostream>
#include <stdlib.h>
//
// Poner el nombre y apellido al principio del archifo fraccion.cc a entregar.
//
using namespace std;

class fraccion{   // representa una fraccion
  int numerador;     //siempre reducida a su forma simplificada
  int denominador;   // si d=0 la fraccion es 0/1  Siempre el negativo va en el numerador
  static int mcd (int n, int d); 
  void simplificar();   // reduce esta fraccion a su forma mas simple (2/4 -> 1/2)
  public:
    fraccion();  // construye una fraccion 0/1
    fraccion (int n, int d);  //construye una fraccion n/d.
    fraccion operator+(fraccion f); // costruye una nueva fraccion suma de esta con f
    bool operator<(fraccion f); // true si esta fraccion es < f
    friend ostream& operator<<(ostream& os, fraccion f); // imprime -> n/d
    friend istream& operator>>(istream& is, fraccion&f); // lee n/d
};
int fraccion::mcd(int n, int d){
  return d==0?n:mcd(d,n%d);
}
#endif
