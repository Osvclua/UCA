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
	}
	int getInt(){return val;}
	~Entero(){
		cout<<"Destruye entero "<<val<<endl;
	}
	Entero& operator=(Entero& e){
		cout<<"Asignacion de "<<e.getInt()<<endl;
		return *this;
	}
};
	bool esPar(Entero e){
		return e.getInt()%2==0;
	}
	
//int Entero::nro=1;
		
int main(int argc, char *argv[]) {
	
	Entero e(3);
	cout<<"Creado Entero con "<<e.getInt()<<endl;
	cout<<"EsPar "<<boolalpha<<esPar(e)<<endl;
	Entero e1(e);
	Entero e2(3);
	cout<<"asigno"<<endl;
	e2=e1=e;
	
}