#ifndef Pila_h
#define Pila_h 
#include <iostream>
#include "Nodo.h"
using namespace std;

class Pila{
  Nodo * prim; 
public:
  Pila():prim(NULL){};
  bool vacia(){ return prim==NULL;}
  void push(Cosa c){
    prim=new Nodo (new Cosa(c),prim);
  }
  Cosa pop(){
    Cosa* aux=prim->cp;
    Nodo * naux=prim;
    prim=prim->sig;
    delete naux;
    return *aux;
  }
};
#endif
