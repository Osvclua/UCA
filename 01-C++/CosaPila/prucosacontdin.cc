#include <fstream>
#include "cosaContDin.h"
#include "Nodo.h"

int main(int argc, char * argv[] ){
  if (argc <2) {
    cerr<< "Uso: "<<argv[0]<<" <archivo>"<<endl;
  }
  ifstream entra(argv[1]);
  cosaContDin cc;
  cosa c;
  while (entra>>c){
    cc.putCosa(c);
  }
  cout<<"El container tiene:"<<endl;
  cc.impContDin();
  cout << "Ingrese cosa a buscar "<<endl;
  cin>>c;
  cout<<boolalpha<<"Esta "<<c<<"? "<<cc.estaCosa(c)<<endl;
}