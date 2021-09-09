#include "cosa.cc"

class cosaCont{
  cosa cosar[10];
  int libre;
public:
  cosaCont():libre(0){};
  void putCosa (cosa c){
     cosar[libre++]=c;}
  void impCont();
  bool estaCosa(cosa c);
  cosa minCosa();
};

void cosaCont::impCont(){
  if (libre !=0) {
    for (int i=0;i<libre;i++){
      cout<<cosar[i]<<"-->";
    }
  }
  cout<<"\\"<<endl;
}

bool cosaCont::estaCosa(cosa c){
  for (int i=0;i<libre;i++){
    if (c==cosar[i]) return true;
  }
  return false;
}

cosa cosaCont::minCosa(){
  int mini=0;
  cosa cm;
  cm=cosa(0,"");
  if (libre==0) return cm;
  else
    for (int i=0;i<libre;i++){
       if (cosar[i]<cosar[mini])
	 mini=i;
    }
    return cosar[mini];
}