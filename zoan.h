#include <iostream>
#include "fruta.h"
#pragma once
#include <string>
using namespace std;

class zoan : public fruta{
protected:
	string tipo;
	string animal;
public:
	zoan(string,string,string);
	string gettipo();
	string getanimal();
};