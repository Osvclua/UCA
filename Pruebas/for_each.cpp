#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int vec[5]={2,4,1,6,8};
	for (auto val:vec){
		cout<<val<<", ";
	}
	cout<<endl;
}