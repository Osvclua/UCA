#ifndef Nodo_h
#define Nodo_h 
#include <iostream>
#include "Cosa.h"
using namespace std;

class Nodo{
  Cosa * cp;
  Nodo*  sig;
 public:
   Nodo():cp(NULL),sig(NULL){};
   Nodo(Cosa *c,Nodo * s=NULL):cp(c), sig(s){};
   friend class Pila; 
};
#endif
  
