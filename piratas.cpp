#include "piratas.h"
piratas::piratas(string type , int age , string name, fruta* fr, bool haki1, bool haki2, bool haki3,string ocean, string trip, string function):seres( type ,  age ,  name,  fr, haki1,  haki2,  haki3){
oceano=ocean;
tripulacion=trip;
funcion = function;
}

piratas::piratas(string type , int age , string name, bool haki1, bool haki2, bool haki3,string ocean, string trip,string function):seres( type ,  age ,  name,  haki1,  haki2,  haki3){
oceano=ocean;
tripulacion=trip;
funcion = function;
}

string piratas::getoceano(){
	return oceano;

}

string piratas::gettripulacion(){
	return tripulacion;
}
string piratas::getfuncion(){
	return funcion;
}