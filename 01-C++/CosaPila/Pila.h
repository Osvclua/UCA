#include "Nodo.h"


class Pila{
  Nodo * prim;
public:
  Pila():prim(null){};
  void push (cosa c){
    prim=new Nodo (c,prim);
  }
  cosa pop(){
     cosa c= * prim->getEste();
     Nodo * x=prim;
     prim=prim->getSig();
     delete (x);
     return c;
  }
  bool estaVacia(){
    return (prim==null);
  }
};