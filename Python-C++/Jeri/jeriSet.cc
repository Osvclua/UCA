#include <iostream>
#include <set>
using namespace std;

bool vocal(char x){
    set<char> vocales={'a','e','i','o','u','A','E','I','O','U'};
    return vocales.contains(x);
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