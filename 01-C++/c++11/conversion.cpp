#include <iostream>
#include <string>
using namespace std;

int main() 
{
   double f = 23.43;
	int e=1234;
	string fr="23/4";
   string f_str = to_string(f);
	string e_str = to_string(e);
   cout << "flotante "<<f_str <<
			" entero "<<e_str<<endl;
	cout<<"inversas "<<stof(f_str)<<" "<<stoi(e_str)<<endl;
	
	cout<<"la fraccion "<<fr<<endl;
	int n=stoi(fr)	;
	
}