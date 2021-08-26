#include <iostream>
#include <fstream>
#include <map>

using namespace std;

void print_map(map<char, int> m){
    for (const auto [key, value] : m) {
        std::cout << key << " = " << value << "; ";
    }
    std::cout << "\n";
}
void acumula (string linea, map<char,int> &res ){
    for (char c:linea){
        res[c]++;
    }
}
int main(int argc, char*argv[]){
if (argc<2){
    cerr<<"Uso: "<<argv[0]<<" <archivo>"<<endl;
    exit(1);
}
string n_arch=argv[1];
ifstream entra (n_arch);
char lin[80];
string linea;
map <char,int> res;

while (getline(entra,linea)){
    acumula(linea,res);
    }
cout<<"Acumulados"<<endl;
print_map(res);
}