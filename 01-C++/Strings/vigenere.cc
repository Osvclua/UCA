// VIGNERE

#include <iomanip>
#include <string>
#include <cstring>
#include <iostream>
#include <fstream>
using namespace std;
string alfa("abcdefghijklmnopqrstuvwxyz");

string cesar (string st, int n){
	string r("");
	for (int i=0; i<st.length();i++)
		r+=alfa[alfa.find_first_of(st[i])+n];
	return r;
}
string rasec (string st, int n){
	string r("");
	for (int i=0; i<st.length();i++)
		r+=alfa[alfa.find_last_of(st[i])-n];
	return r;
}

string vigenere (string st, string clave){
	string repclav,r;
	for (int i=0;i<st.length();i+=clave.length())
		repclav+=clave;
	for (int i=0;i<st.length();i++)
		if (alfa.find(st.substr(i,1))==string::npos)
				r+= st.substr(i,1);
		else
			r+=cesar(st.substr(i,1),alfa.find(repclav[i])+1);
	return r;
	}
	
string erenegiv (string st, string clave){
	string repclav,r;
	for (int i=0;i<st.length();i+=clave.length())
		repclav+=clave;
	for (int i=0;i<st.length();i++){
		if (alfa.find(st.substr(i,1))==string::npos)
			r+= st.substr(i,1);
		else
			r+=rasec(st.substr(i,1),alfa.find(repclav[i])+1);
		}
	return r;
	}
	
int main(){
	string n_archi,datocif,clave;
	string  linea("");
	alfa+=alfa;
	cout << "Ingrese la palabra clave "<<endl;
	cin>>clave;
	cout<<"Ingrese la linea a codificar "<<endl;
	// la siguente linea es porque al cambiar de stream a caracter, getline() consume
	// el retorno de carro de la operacion anterior.
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	while (getline(cin,linea)){
		datocif=vigenere(linea,clave);
		cout<<"|"<<linea<<"| con clave vignere "<<clave<<" = |"<<
				datocif<<"|"<<endl;
		cout<<"Descifrado |"<<erenegiv(datocif,clave)<<"|"<<endl;
		cout<<"Ingrese la linea a codificar "<<endl;
		}
		
}

