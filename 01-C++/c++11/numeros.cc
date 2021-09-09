#include <iostream>
using namespace std;

int cantDig(int n){
  if (n<10) return 1;
     else return 1+cantDig(n/10);
} 

int pow10(int n){
	 int res=1;
	 for (int i=n; i>1;i--) res*=10;
	 return res;
}

int  digiN(int n, int nro) {
	return (nro /pow10(n) )%10;
} 

bool capi(int n){
	//cout<<"Ver "<<n/pow10(cantDig(n)) <<" y "<< n%10<<endl;
	if(n<10) return true;
	   else return (n%10)==n/pow10(cantDig(n)) and capi((n/10) - n%10*pow10(cantDig(n)));
}
	   
int main(){
  int nro;
  cout<<"Ingrese nro"<<endl;
  while (cin>>nro){
		cout<<nro<<" tiene "<<cantDig(nro)<<" cifras "<<endl;
		for (int i=1;i<=cantDig(nro); i++){
			cout<<i<<")="<<digiN(i,nro)<<" ;";		
		}
		cout<<endl;
		cout<<"Capicua="<<boolalpha<<capi(nro)<<endl;
	}
}
