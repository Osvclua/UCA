#include "Nodo.h"

class cosaContDin{
  Nodo * prim;
  void imp (Nodo * x);
  bool esta (cosa c, Nodo * x);
public:
  cosaContDin():prim(null){};
  void putCosa (cosa c){
     prim=new Nodo(c,prim) ;}
  void impContDin();
  bool estaCosa(cosa c);
//  cosa minCosa();
};
void cosaContDin::impContDin(){
   if (prim==null) cout<<"/"<<endl;
    else imp(prim);
}

void cosaContDin::imp(Nodo * x){
  if (x==null) cout <<"/"<<endl;
    else {
      cout<<*x<<"->";
      imp (x->getSig());
    }
}

bool cosaContDin::estaCosa(cosa c){
  return (prim !=null) and esta(c,prim);
}

bool cosaContDin::esta(cosa c, Nodo *x){
  if (x==null) return false;
    else return (*(x->getEste())==c) or esta (c,x->getSig());
}