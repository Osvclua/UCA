#include <iostream>
using namespace std;

class Entero{	
	int val;
  public:
    //static int nro;
    Entero(){
		cout<<"Constructor sin parametros"<<endl;
    }	
	Entero(int i):val(i){cout<<"Constructor a partir de int "<<i<<endl;}
	
	Entero(Entero& e):val(e.getInt()){
		cout<<"Constructor de copia "<<e.getInt()<<endl;
	}   //e1=e2
	int getInt(){return val;}
	~Entero(){
		cout<<"Destruye entero "<<val<<endl;
	}
	Entero& operator=(Entero& e){
		cout<<"Asignacion de "<<e.getInt()<<endl;
		return *this;
	}
	
	friend ostream& operator<<(ostream&os, Entero e){
		return os<<e.val;
	}
};

bool esPar(Entero e){
		return e.getInt()%2==0; 
	}
	
		
int main(int argc, char *argv[]) {
	
	Entero e(3);
	
	cout<<"Creado Entero con "<<e.getInt()<<endl;
	cout<<"e="<<e<<endl;
	
	cout<<"EsPar "<<boolalpha<<esPar(e)<<endl;
	
	Entero e1(1);
	cout<<"e="<<e;
	cout<<"e1="<<e1<<endl;
	Entero e2(2);
	cout<<"e2="<<e2<<endl;
	cout<<endl<<"asigno e2=e1=e "<<endl;
	(e2=e1)=e;
	cout<<"e1="<<e1<<endl;
	cout<<"e2="<<e2<<endl;
}