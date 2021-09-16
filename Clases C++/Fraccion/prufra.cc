#include "fraccion.cc"

int main(){
  cout<<"Parcial de Programacion I (2011)"<<endl;
  cout<<"Reemplazar este texto por Nombre y Apellido"<<endl<<endl<<endl;
  // si el texto anterior no fue reemplazado -> desaprobado.
  
  fraccion f1(1,7), f2(5,-15), f8(1,0);
  cout<<"f1="<<f1<<" f2="<<f2<<endl;
  // hasta aca 4 puntos menos de esto --- volver en 2012
  fraccion f3=fraccion(1,2)+fraccion(1,4);
  cout<<"f3="<<f3<<endl;
  // hasta aca 6 puntos
   fraccion f4;
  cout<<"Ingrese una fraccion"<<endl;
  while (cin>>f4){
    cout<<"Leido "<<f4<<endl;
    //hasta aca 8 puntos
    cout<<f3<<"< "<<f4<<boolalpha<<" ="<<(f3<f4)<<endl;
    cout<<"Ingrese una fraccion"<<endl;
  }
 // hasta aca 10 puntos
}

