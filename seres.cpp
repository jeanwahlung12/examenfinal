#include "seres.h"

seres::seres(string type , int age , string name, fruta* fr, bool haki1, bool haki2, bool haki3){

	raza=type;
	edad = age;
	nombre name;
	fruit =fr;
	hakiob=haki1;
	hakiar=haki2;
	hakirey=haki3;


}

seres::seres(string type , int age , string name, bool haki1, bool haki2, bool haki3){

	raza=type;
	edad = age;
	nombre name;
	hakiob=haki1;
	hakiar=haki2;
	hakirey=haki3;


}
 
string seres::getraza(){
	return raza;
}

int seres::getedad(){
	return edad;
}

string seres::getnombre(){
	return nombre;
}

fruta* seres::getfruit(){
	return fruit;
}

bool seres::gethakiob(){
	return hakiob;
}

bool seres::gethakiar(){
	return hakiar;

}

bool seres::gethakirey(){
	return hakirey;
}
