#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	long valor=0;
	char  s[30];
   //s=strdup("                    ");
  int ret=sprintf(s,"%lo",valor);
  cout<<string(s)<<endl;
}
