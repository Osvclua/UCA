#include <iostream>
using namespace std;

class cosa{
  int num;
  string nom;
public: 
  cosa():num(0), nom(""){};
  cosa(int nu,string no):num(nu),nom(no){};
  cosa(cosa& c):num(c.getNum()), nom(c.getNom()){};
  int getNum(){return num;};
  string getNom(){return nom;};
  friend ostream& operator<<(ostream& os, cosa c);
  friend istream& operator>>(istream& is, cosa& c);
  bool operator< (cosa c); // numero y nombre
  bool operator==(cosa c){return (num==c.num) and (nom==c.nom);}
  bool esMenorAlfaQue(cosa c);
};

ostream& operator<<(ostream& os, cosa c){
  return os<<"("<<c.num<<", "<<c.nom<<")";
}
istream& operator>>(istream& is, cosa& c){
  return is>>c.num>>c.nom;
}

bool cosa::operator<(cosa c){
  return (num<c.num) or 
	(num==c.num) and (nom< c.nom);
}

bool cosa::esMenorAlfaQue(cosa c){
  return (nom<c.nom) or 
	(nom==c.nom) and (num< c.num);
}

