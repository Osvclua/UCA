#ifndef Cosa_h
#define Cosa_h 
#include <iostream>
using namespace std;

class Cosa{
  int num;
  string nom;
public:
  Cosa(int n=0, string s=""):num(n),nom(s){};
  friend ostream& operator<<(ostream& os, Cosa c){
    return os<<c.num<<" "<<c.nom;
  }
  friend istream& operator>>(istream& is, Cosa& c){
    return is>>c.num>>c.nom;
  }
};
#endif
