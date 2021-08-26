#include <iostream>
#include <fstream>
using namespace std;

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
    n_sali=n_archi+".desc";
	ifstream archi(n_archi);
	ofstream sali(n_sali);
	archi.getline(&linea[0],60);
	while (!archi.eof()){
		datocif=linea;
		dato=rasec(datocif,clave);
		//sali<<dato<<endl;
		archi.getline(&linea[0],60);
		}	
    cout<<"Descifrado el "<<n_archi<<" en "<<n_sali<<endl;

}