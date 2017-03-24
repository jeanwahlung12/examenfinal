#include "seres.h"
#pragma once
using namespace std;
class piratas : public seres{
protected:
	string oceano;
	string tripulacion;
	string funcion;
public:
	piratas(string , int , string, fruta* , bool , bool, bool, string ,string,string);
	piratasa(string , int , string, bool , bool, bool, string ,string,string);
	string getoceano();
	string gettripulacion();
	string getfuncion();
};