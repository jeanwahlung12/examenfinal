#include "revolucionario.h"
revolucionario::revolucionario(string type , int age , string name, fruta* fr, bool haki1, bool haki2, bool haki3,string date):seres( type ,  age ,  name,  fr, haki1,  haki2,  haki3){
fecha=date;

}

revolucionario::revolucionario(string type , int age , string name, bool haki1, bool haki2, bool haki3,string date):seres( type ,  age ,  name,  haki1,  haki2,  haki3){
fecha=date;

}

string revolucionario::getfecha(){
	return fecha;

}

