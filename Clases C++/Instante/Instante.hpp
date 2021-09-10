#include <iostream>
#include <fstream>
#ifndef instante_h
#define instante_h
using namespace std;

class Instante{
	int minuto;
	int segundo;
public:
	int getMinuto();
	int getSegundo();
	void setSegundo(int s);
	void setMinuto(int m);
	Instante(int m=0, int s=0);
	void impr(ostream& os);
};
#endif 