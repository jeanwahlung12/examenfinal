#include "seres.h"
#pragma once
using namespace std;
class marina : public seres{
protected:
	string fecha;
	string rango;
public:
	marina(string , int , string, fruta* , bool , bool, bool, string ,string);
	marina(string , int , string, bool , bool, bool, string ,string);
	string getfecha();
	string getrango();

};