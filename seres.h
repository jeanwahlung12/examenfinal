#pragma once
#include <iostream>
#include <string>
#include "fruta.h"
using namespace std;
class seres{
protected:
	string raza;
	int edad;
	string nombre;
	fruta* fruit;
	bool hakiob;
	bool hakiar;
	bool hakirey;
public:
	seres(string,int,string,fruta*,bool,bool,bool);
	seres(string,int,string,bool,bool,bool);
	string getraza();
	int getedad();
	string getnombre();
	fruta* getfruit();
	bool gethakiob();
	bool gethakiar();
	bool gethakirey();

};