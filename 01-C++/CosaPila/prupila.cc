#include <fstream>
#include <cstdlib>
#include "Pila.h"
#include "Nodo.h"

int main(int argc, char * argv[] ){
  if (argc <2) {
    cerr<< "Uso: "<<argv[0]<<" <archivo>"<<endl;
    exit(2);
  }
  ifstream entra(argv[1]);
  cosa c;
  Pila p;
  while (entra>>c){
    p.push (c);
  }
  cout<<"Sacando de la pila"<<endl;
  while (!p.estaVacia()){
    c=p.pop();
    cout<<c<<endl;
  }
}
  