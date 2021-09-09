#include <iostream>
using namespace std;

typedef struct t_arre{
  int libre;
  long a[20];
};

void pasa (long n, t_arre& ta){
  if (n/10==0) {
    ta.a[ta.libre++]=n;
    }
  else {
    ta.a[ta.libre++]=n%10;
    pasa (n/10,ta);
  }
}

bool even(int i){
  return i%2==0;
}

int luhn (t_arre ta){
  int res=0;
  for (int i=0; i<ta.libre;i++){
    if (!even(i)){
        res+=ta.a[i];
        //cout<<ta.a[i]<<"+";
    }
      else{ 
        res+=2*ta.a[i]/10+2*ta.a[i] %10;
       // cout<<2*ta.a[i]/10+2*ta.a[i] %10<<"+";
      }
  }
  //cout<<endl;
  return res*9 %10;
}
  

void imp (t_arre ta){
  cout <<"{ ";
  for (int i=0; i<ta.libre;i++)
    cout<<ta.a[i]<<", ";
  cout<<"}"<<endl;
}

int main(){
  long n;
  t_arre m;
  m.libre=0;
  cout<<"Ingrese un numero"<<endl;
  cin>>n;
  pasa(n,m);
 // imp(m);
  cout<<"El verificador es "<<luhn(m)<<endl;
}
