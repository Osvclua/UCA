#include <iostream>
#include <compare>
using namespace std;

int main(){
    auto res=5<=>5;
    if (res>0)cout<<">0"<<endl;
    if (res==0)cout<<"==0"<<endl;
    if (res<0) cout<<"<0"<<endl;
}