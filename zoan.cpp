#include "zoan.h"

zoan::zoan(string name , string type, string anim) : fruta(name){
	tipo=type;
	animal=anim;	
}

string zoan::gettipo(){
	return tipo;
}

string zoan::getanimal(){
	return animal;
}