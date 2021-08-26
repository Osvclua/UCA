// VIGNERE

#include <iomanip>
#include <string>
#include <cstring>
#include <iostream>
#include <fstream>
using namespace std;
string alfa("abcdefghijklmnopqrstuvwxyz ");

string cesar (string st, int n){
	string r("");
	for (int i=0; i<st.length();i++)
		r+=alfa[alfa.find_first_of(st[i])+n];
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
	
int main(int argc, char* argv[]){
	if (argc<3) {
    cerr<<"Uso: "<<argv[0]<<"<clave> <archivo> "<<endl;
    exit(1);
    }
	string n_archi(argv[2]),datocif,clave;
    clave=argv[1];
	string  linea("");
	alfa+=alfa;
	ifstream entra(n_archi);
    ofstream cifrado(n_archi+".vgr");
	while (getline(entra,linea)){
		datocif=vigenere(linea,clave);
		cifrado<<datocif<<endl;
		}
	cout<<"Terminado, cifrado "<<n_archi<<" con clave "<<clave<< endl;	
}

