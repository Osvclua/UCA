#include <iostream>
#include <string>
#include "octal.cc"
using namespace std;

int main(){
  octal o1(string("045")),o2=string("08"),o3;
	cout<<"o1="<<o1<<", o2="<<o2<<", o3="<<o3<<endl;
	cout<<"o1="<<o1.enDec()<<", o2="<<o2.enDec()<<", o3="<<o3.enDec()<<endl;
	if (! o2.setOct("023")) cout <<"Error al asignar a o2 (mal)"<<endl;
	if (! o2.setOct("028")) cout <<"Error al asignar a o2 (OK)"<<endl;
	o3=o1+o2;
	cout<<"o1="<<o1<<", o2="<<o2<<", o3="<<o3<<endl;
	cout<<"o1="<<o1.enDec()<<", o2="<<o2.enDec()<<", o3="<<o3.enDec()<<endl;
	cout<<"Ingrese un string (si es octal mejor)"<<endl; 
	while (cin>>o3){
		cout<<"o3="<<o3<<", en decimal="<<o3.enDec()<<" y con getOct="
			<<o3.getOct()<<endl;
	}
}
