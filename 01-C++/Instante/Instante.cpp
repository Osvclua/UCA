#include "instante.hpp"
#ifndef instante_cpp
#define instante_cpp

int Instante::getSegundo(){
	return segundo;
}

int Instante::getMinuto(){
	return minuto;
}

void Instante::setSegundo(int s){
	segundo=s;
}

void Instante::setMinuto(int m){
	minuto=m;
}

void Instante::impr(ostream& os){
	os<<minuto<<":"<<segundo;
}

Instante::Instante(int m, int s){
	minuto=m;
	segundo=s;
}

#endif
