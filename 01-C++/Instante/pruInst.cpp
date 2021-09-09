#include <iostream>
#include "Instante.cpp"

using namespace std;

int main(int argc, char *argv[]) {
  Instante i1, i2(3,4);
  cout<<"Creados i1=";
   i1.impr(cout);
	cout<<" y i2=";
	i2.impr(cout);
	cout<<endl;	
	
}