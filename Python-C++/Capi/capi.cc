#include <iostream>
#include <algorithm>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

bool capi(string a){
    string b=a;
    reverse(a.begin(),a.end());
    return a== b;
}

int main(){
    cout<<"Soy el proceso "<<getpid()<<endl; 
        string st1;
    int i1;
    cout<<"Ingrese un entero "<<endl;
    cin>>i1;
    st1=to_string(i1);
    cout <<"Capicua?="<<capi(st1)<<endl;
}