#include <iostream>
#include <cmath>
using namespace std;

int candig(int n){
	if (n<10)return 1;
		else return 1+candig(n/10);
}

int pot10(int n){
  if (n==0) return 1;
  	  else return 10*(pot10(n-1));	
}

bool capi(int n){
	return (candig(n)==1) or 
	(((n / pot10(candig(n)-1))==(n % 10)) and 
	capi(n% pot10(candig(n)-1)/10)) ;
}



int main(){
	int n;
	cout<<"Ingrese un nro"<<endl;
	while (cin>>n) {
		cout<<"ingresado "<<n<<boolalpha<<" capicua "<<capi(n)<<endl;
		cout<<"Ingrese un nro"<<endl;
	}
}