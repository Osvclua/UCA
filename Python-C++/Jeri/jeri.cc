#include <iomanip>
#include <string>
#include <iostream>
using namespace std;

bool vocal (char c) {
	return 	(c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u')||
		   	(c=='A')||(c=='E')||(c=='I')||(c=='O')||(c=='U');
	}
		   	
string jeri (string s){
	string r;
	for (int i=0;i<s.length();i++)
		if (vocal(s[i])) r=r+s[i]+"p"+s[i]; // r+= -> r=r+(s[i]+"p"+s[i]) el () es una suma no una concatenacion!!
				else 	r=r+s[i];
	return r;
	}
	
string desjeri(string s){
	string r;
	for (int i=0;i<s.length();i++)
		if (vocal(s[i]))
				{
		 		r+=s[i];
		 		i+=2;
		 		}
				else 	r+=s[i];
	return r;
	}

int main(){
	string s("");
	cout <<"Ingrese una palabra "<<endl;
	while (cin >>s){
		cout <<s<<" en Jerigonzo es "<<jeri(s)<<endl;
		cout <<"desjerigonceada es "<<desjeri(jeri(s))<<endl;
		cout <<"Ingrese una palabra "<<endl;
	}
}
