// CESAR

/*#include <iomanip>
#include <string>
#include <cstring>*/
#include <iostream>
#include <fstream>
using namespace std;

string cesar (string st, int n){
	string r("");
	string alfa("abcdefghijklmnopqrstuvwxyz ");
	alfa+=alfa;
	for (int i=0; i<st.length();i++)
		r+=alfa[alfa.find_first_of(st[i])+n];
	return r;
}
string rasec (string st, int n){
	string r("");
	string alfa("abcdefghijklmnopqrstuvwxyz ");
	alfa+=alfa;
	for (int i=0; i<st.length();i++)
		r+=alfa[alfa.find_last_of(st[i])-n];
	return r;
}


int main(){
	string n_archi,dato, datocif;
	char c;
	char linea[80];
	int clave;
	cout << "Ingrese el numero clave "<<endl;
	cin>>clave;
	cout<<"Ingrese el nombre del archivo a codificar "<<endl;
	cin >>n_archi;
	ifstream archi(n_archi.c_str());
	archi.getline(&linea[0],60);
	while (!archi.eof()){
		dato=linea;
		datocif=cesar(dato,clave);
		cout<<"|"<<dato<<"| con clave cesar "<<clave<<" = |"<<
				datocif<<"|"<<endl;
		cout<<"Descifrado |"<<rasec(datocif,clave)<<"|"<<endl;
		archi.getline(&linea[0],60);
		}
		
}

