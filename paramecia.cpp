#include "paramecia.h"

paramecia::paramecia(string name , string desc) : fruta(name){
	descripcion = desc;	
}

string paramecia::getdescripcion(){
	return descripcion;
}