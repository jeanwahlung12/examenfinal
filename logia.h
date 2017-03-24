#include <iostream>
#include "fruta.h"
#pragma once
#include <string>
using namespace std;

class logia : public fruta{
protected:
	string elemento;
public:
	logia(string,string);
	string getelemento();
};