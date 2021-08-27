#include <iostream>
using namespace std;

void cambio (string& a, string& b){
    string aux=a;
    a=b;
    b=aux;   
}

int main(){
    string u="uno";
    string d("dos");
    cout <<"Antes "<<u<<", "<<d<<endl;
    cambio (u,d);
    cout<<"Despues "<<u<<", "<<d<<endl;

}