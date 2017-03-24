#include "marina.h"
marina::marina(string type , int age , string name, fruta* fr, bool haki1, bool haki2, bool haki3,string date, string range):seres( type ,  age ,  name,  fr, haki1,  haki2,  haki3){
fecha=date;
rango=range;
}

marina::marina(string type , int age , string name, bool haki1, bool haki2, bool haki3,string date, string range):seres( type ,  age ,  name,  haki1,  haki2,  haki3){
fecha=date;
rango=range;
}

string marina::getfecha(){
	return fecha;

}

string marina::getrango(){
	return rango;
}