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


int main(int argc, char* argv[]){
	if (argc<3) {
    cerr<<"Uso: "<<argv[0]<<"<nro clave> <archivo> "<<endl;
    exit(1);
  }
	string n_archi,n_sali,dato, datocif;
	char c;
	char linea[80];
	int clave=stoi(argv[1]);
	n_archi=argv[2];
	n_sali=n_archi+".cesar";
	ifstream archi(n_archi);
	ofstream sali(n_sali);
	archi.getline(&linea[0],60);
	while (!archi.eof()){
		dato=linea;
		datocif=cesar(dato,clave);
		sali<<datocif<<endl;
		archi.getline(&linea[0],60);
		}
	cout<<"Cifrado el "<<n_archi<<" en "<<n_sali<<endl;
}

