#include <iostream>
#include "Instante.hpp"
#include "Instante.cpp"

using namespace std;

int main(int argc, char *argv[]) {
  Instante i1, i2(3,4);
  cout<<"Creados i1=";
   i1.impr(cout);
	cout<<" y i2=";
	i2.impr(cout);
	cout<<endl;
  cout<<"i1 vale (i1.minuto: i1.segundo)="<<i1.getMinuto()<<":"<<
  i1.getSegundo()<<endl;
	
}