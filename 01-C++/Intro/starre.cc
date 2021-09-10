#include <iostream>
using namespace std;

typedef struct {
	int a[30];
	int libre;
	} intArre ;

typedef struct {
	int valor;
	int indice;
} ele; 

void impArre(intArre a){
  cout<<"Imprimiendo"<<endl;
	for(int i=0;i<a.libre;i++){
	  cout<<"Elemento ["<<i<<"]="<<a.a[i]<<endl;
	  }
}

bool ordMam(intArre a, int hasta){
	cout<<"hasta "<<hasta<<endl;
	return (hasta<=0) or
	((a.a[hasta-1]>a.a[hasta]) and ordMam(a,hasta-1));
}

ele min(intArre a){
	ele minimo={INT_MAX,-1};
	for (int i=0;i<a.libre;i++){
		if (a.a[i]<minimo.valor){
			minimo.valor=a.a[i];
			minimo.indice=i;
		}
	}
	return minimo;
}

void almacena (int dat, intArre& a1){
	a1.a[a1.libre++]=dat;
}

int main(){
  intArre a1;
  a1.libre=0;
  int dat;
  cout<<"Ingrese entero"<<endl;
  while (cin>>dat){
  	almacena (dat,a1);
  	}
  	impArre(a1);
	ele e=min(a1);
	if (e.indice != -1)
		cout<<"Minimo="<<e.valor<<" en posicion "<<e.indice<<endl;
	else 
		cout<<"Arreglo vacio"<<endl;
	if (ordMam(a1,a1.libre-1)) cout<<"Ordenado Mayor a menor"<<endl;
}
	