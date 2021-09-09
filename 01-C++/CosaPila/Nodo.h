#ifndef NODO_H
#include "cosa.cc"
#define null NULL
#define NODO_H

class Nodo {
   cosa * este;
   Nodo * sig;
  public:
    Nodo():este(null), sig(null){};
    Nodo* getSig(){return sig;}
    cosa * getEste() {return este;}
    Nodo(cosa c, Nodo * s=null):este(new cosa(c)),sig(s){};
    friend ostream& operator<<(ostream & os, Nodo n){
        return os << * n.este <<"--";
    }
};
#endif