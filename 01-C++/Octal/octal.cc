#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cstdio>
using namespace std;

class octal{  // formato 0nnn... -> octal nnn 0<=n<=9
  long valor;
  static bool validar(string s); // true si s contiene un numero octal
  public:
  octal():valor(0){};
  octal(string s); // si s es un octal, valor=s si no valor=0
  long enDec(); // valor en decimal de this
  string getOct(); // devuelve el numero en octal
  bool setOct(string s); // false si s no tiene un octal
  octal operator+(octal o); //un nuevo octal valor=o+this
  friend ostream& operator<<(ostream& os, octal o); //0nn
  friend istream& operator>>(istream& is, octal &o);
};

bool octal::validar(string s){
      return ((s[0]=='0') and (s.find_first_not_of("01234567")>s.length()));
}

octal::octal(string s){
	if (! validar(s)) valor=0;
		else valor=strtol(s.c_str(),NULL,8);
}

long octal::enDec(){
	return valor;
}

string octal::getOct(){
	char s[30];
	int ret=sprintf(s,"%lo",valor);
	return string(s);
}

bool octal::setOct(string s){
	if (validar(s)){
		 valor=strtol(s.c_str(),NULL,8);
			return true;
		}
	return false;
}

ostream& operator<<(ostream& os, octal o){
	return os<<o.getOct();
}

istream& operator>>(istream& is, octal &o){
	string s;
	is>>s;
	o.setOct(s);
	return is;
}

octal octal::operator+(octal o){
	octal o1;
	o1.valor=valor+o.valor;
	return o1;
}
