#include <iostream>
#include "fruta.h"
#pragma once
#include <string>
using namespace std;

class paramecia : public fruta{
protected:
	string descripcion;
public:
	paramecia(string,string );
	string getdescripcion();
};