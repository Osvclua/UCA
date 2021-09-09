#include "cosaContDin.h"

int main(){
   cosa c1(1,"uno");
   cosa * c1p=& c1;
   cout<<c1<<"--"<<*c1p<<endl;
}