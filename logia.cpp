#include "logia.h"

logia::logia(string name , string element) : fruta(name){
	elemento = element;	
}

string logia::getelemento(){
	return elemento;
}