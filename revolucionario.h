#include "seres.h"
#pragma once
using namespace std;
class revolucionario: public seres{
protected:
	string fecha;
public:
	revolucionario(string , int , string, fruta* , bool , bool, bool, string );
	revolucionario(string , int , string, bool , bool, bool, string );
	string getfecha();
	
};