#include <iostream>
#include <climits>
using namespace std;

class Cosa{
  int num;
  string nom;
  int id;
  static int tkt;
 public:
   Cosa(){
     num=0; nom="";
     id=Cosa::tkt++;
     cout<<"Constructor sin parametros id "<<
      id<<endl;
  }
  /*
  Cosa (int n, string s){
    num=n; nom=s;
     cout<<"Constructor ("<<n<<";"<<s<<")"<<endl;
  } */
  Cosa (int n, string s):num(n),nom(s){
    id=Cosa::tkt++;
    cout<<"Constructor ("<<n<<";"<<s<<") id "<<
	  id<<endl;}
  
  Cosa(Cosa& c):num(c.getNum()),nom (c.getNom()){
    id=Cosa::tkt++;
    cout<<"Constructor de copia ("
    <<c.getNum()<<";"<<c.getNom()<<") id "<<
    id<<endl;
  }
  ~Cosa(){
    cout<<"Destructor ("
      <<num<<";"<<nom<<") id "<<id<<endl;
    
  }
  int getNum(){return num;}
  string getNom(){return nom;}
  void setNom(string s){nom=s;}
  void imp(){
    cout<<"("<<getNum()<<","<<getNom()<<") id "<<id;
  };
  bool operator<(Cosa c){  //compara numeros
    return num <  c.num; //c.getNum()
  }
};

void swap (Cosa &a, Cosa& b){
  Cosa aux(a);a=b;b=aux;
}

int Cosa::tkt=0;

int main(){
  Cosa c2(4,"cuatro");
  Cosa c1;
  Cosa c3(5,"cinco");
  Cosa c4(c2);
  cout<<"c1=";c1.imp();cout<<endl;
  cout<<"c2=";c2.imp();cout<<endl;
  cout<<"c1<c2?"<<boolalpha<<(c1<c2)<<endl;  
  cout<<"c3=";c3.imp();cout<<endl;
  cout<<"c4=";c4.imp();cout<<endl;
  c4.setNom("ocho");
  cout<<"c3=";c3.imp();cout<<endl;
  cout<<"c4=";c4.imp();cout<<endl;
  cout<<" swap(c1,c2)"<<endl;
  swap(c1,c2);
  cout<<"c1=";c1.imp();cout<<endl;
  cout<<"c2=";c2.imp();cout<<endl;
 
}