#include "seres.h"
#include "fruta.h"
#include "logia.h"
#include "zoan.h"
#include "paramecia.h"
#include "marina.h"
#include "revolucionario.h"
#include "piratas.h"
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;
void creararchivo(seres*);
void escribir(string,seres*);
int main(){
	vector<fruta*> frutas;
	vector<seres*> seres;
	paramecia* p = new paramecia("Hana Hana", "Florecer");

	paramecia* par = new paramecia("Gomumu", "Hombre de goma");
	paramecia* p2 = new paramecia("Yomi Yomi", "Renacer");
	paramecia* p3 = new paramecia("Horu Horu", "MOdificar el cuerpo humano");
	logia* l = new logia("Pika pika","transformacion");
	zoan* zo = new zoan("Hito Hito",  "transformacion"," Humano");
	piratas* pir = new piratas("Humano", 19 , " Monkey D. Luffy" ,par,true,true,true,"East Blue","Piratas de Sombrero De Paja" , "Lider");
	creararchivo(pir);
	piratas* pir2 = new piratas("Humano", 19 , " Roronoa Zoro " ,true,true,false,"East Blue","Tripulacion de Luffy" , "Espadachin");
	piratas* pir3 = new piratas("Humano", 18 , " Nami" ,false,false,false,"East Blue","Tripulacion de Luffy" , "Navegante");
	piratas* pir4 = new piratas("Humano", 19 , " Usopp" ,true,false,false,"East Blue","Tripulacion De Luffy" , "Francotirado");
	piratas* pir5 = new piratas("Humano", 19 , " Vinsmoke Sanji" ,true,true,false,"North Blue","Tripulacion De Luffy" , "Cocinero");
	piratas* pir6 = new piratas("Reno", 15 , " Tony Tony Chopper" ,zo,false,false,false,"East Blue","Tripulacion de Luffy" , "Medico");
	piratas* pir7 = new piratas("Humana", 28 , "Nico Robin" ,p,false,false,false,"West Blue","Tripulacion de Luffy" , "Arqueologa");
	piratas* pir8 = new piratas("Cyborg", 34 , "Franky" ,false,false,false,"South Blue","Tripulacion de Luffy" , "Carpintero naval");
	piratas* pir9 = new piratas("Esqueleto", 88 , "Brook" ,p,false,false,false,"West Blue","Tripulacion de Luffy" , "Musico Espadachin");
	marina* mr1 = new marina("Humano", 58 , "Borsalino" ,l,true,true,false," 23 de noviembre" , "Almirante");
	marina* mr2 = new marina("Humano", 48 , "Issho" ,true,true,false," 10 de agosto" , "Almirante");
	marina* mr3 = new marina("Humano", 41 , "Kuzan" ,true,true,false," 21 de septiembre" , "Almirante");
	marina* mr4 = new marina("Humano", 55 , "Sakazuki" ,true,true,false," 16 de noviembre" , "Almirante de la flota");
	revolucionario* r1 = new revolucionario("Humano", 0 , "Monkey D Dragon" ,l,true,true,true," 5 de octubre");
	revolucionario* r2 = new revolucionario("Humano", 0 , "Emporio Ivankov" ,p3,true,true,false," 8 de Enero");
	revolucionario* r3 = new revolucionario("Humano", 22 , "Sabo" ,true,true,false," 20 de Marzo");
	creararchivo(pir2);
	creararchivo(pir3);
	creararchivo(pir4);
	creararchivo(pir5);
	creararchivo(pir6);
	creararchivo(pir7);
	creararchivo(pir8);
	creararchivo(pir9);
	creararchivo(mr1);
	creararchivo(mr2);
	creararchivo(mr3);
	creararchivo(mr4);
	creararchivo(r1);
	creararchivo(r2);
	creararchivo(r3);

	seres.push_back(pir);
	seres.push_back(pir2);
	seres.push_back(pir3);
	seres.push_back(pir4);
	seres.push_back(pir5);
	seres.push_back(pir6);
	seres.push_back(pir7);
	seres.push_back(pir8);
	seres.push_back(pir9);

	seres.push_back(mr1);
	seres.push_back(mr2);
	seres.push_back(mr3);
	seres.push_back(mr4);
	seres.push_back(r1);
	seres.push_back(r2);
	seres.push_back(r3);
	frutas.push_back(p);
	frutas.push_back(par);
	frutas.push_back(p2);
	frutas.push_back(p3);
	frutas.push_back(l);
	frutas.push_back(zo);

	char resp='s';
	while(resp =='s' || resp=='S'){
		int op;
		int edad;
		int f ;
		string nombre;
		string raza;
		cout << "ingrese la raza : \n 1)giojin \n 2)kyojin \n 3)ningyo \n 4)humano \n 5)mink  ";
		cin >> op;
		if(op==1){
			raza="giojin";
		}
		else if(op==2){
			raza="kyojin";
		}
		else if(op==3){
			raza="ningyo";
		}else if(op==4){
			raza="humano";
		}else if(op==5){
			raza = "mink";
		}
		cout << "ingrese la edad :";
		cin >> edad;
		cout << " ingrese el nombre :";
		cin >> nombre;
		cout << "tiene Fruta 1)si 2)no :";
		cin >> f;
		int opfruto;
		paramecia* parame;
		zoan* zo2;
		logia* log;
		if(f==1){
			string nomfruto;
			
			
			string description;
			cout << "ingrese el nombre del fruto :";
			cin >> nomfruto;
			cout << "ingrese el tipo de fruto 1)paramecia 2)zoan 3)logia :";
			cin >> opfruto;
			if(opfruto==1){
				cout << "ingrese la descripcion :" ;
				cin >> description;
				parame = new paramecia(nomfruto,description);
				frutas.push_back(parame);
			}
			else if (opfruto==2){
				string tipofruta;
				string animal;
				cout << "ingrese el tipo de fruto:";
				cin >> tipofruta;
				cout << "ingrese el animal :";
				cin >> animal;
				zo2 = new zoan (nomfruto,tipofruta,animal);
				frutas.push_back(zo2);
			}
			else if(opfruto==3){
				string elemento;
				cout << "ingrese el elemento :";
				cin >> elemento;
				log = new logia(nomfruto,elemento);
				frutas.push_back(log);
			}

			

		}
		int ophak;
		bool haki1=false,haki2=false,haki3=false;

		cout << " tiene haki 1)si 2)no ";
		cin >> ophak;
		if(ophak==1){
			int haki;
			string resphaki="s";
			while(resphaki =="s"|| resphaki=="S"){
				cout << " ingrese el tipo de haki \n 1)Observacion \n 2) Armadura \n 3)rey: ";
				cin >> haki;
				if(haki==1){
					haki1=true;
				}
				else if(haki==2){
					haki2=true;
				}
				else if(haki==3){
					haki3=true;
				}
				cout << " tiene mas habilidades : s/n";
				cin >> resphaki;

			}


		}
		int bando;
		cout << "ingrese el bando 1)Marina 2) Pirata 3)revolucionario :";
		cin >> bando;
		if(bando==1){
			string fecha;
			string rango;
			int oprango;
			cout << "ingrese la fecha de ingreso :";
			cin >> fecha;
			cout << " ingrese el rango 1)cadete 2)teniente 3)vice-almirante 4)almirante 5)almirante de flota" ;
			if(oprango==1){
				rango="cadete";
			}
			else if(oprango==2){
				rango="teniente";
			}
			else if(oprango==3){
				rango="vice-almirante";
			}
			else if(oprango==4){
				rango="almirante";
			}
			else if(oprango==5){
				rango="almirante de flota";
			}
			if(ophak==1){
				if(opfruto==1){
					marina* mar = new marina(raza,edad,nombre,parame,haki1,haki2,haki3,fecha,rango);
					seres.push_back(mar);
					creararchivo(mar);
				}
				else if(opfruto==2){
					marina* mar = new marina(raza,edad,nombre,zo2,haki1,haki2,haki3,fecha,rango);
					seres.push_back(mar);
					creararchivo(mar);
				}
				else if(opfruto==3){
					marina* mar = new marina(raza,edad,nombre,log,haki1,haki2,haki3,fecha,rango);
					seres.push_back(mar);
					creararchivo(mar);
				}
				
			}
			else{
				marina* mar = new marina(raza,edad,nombre,haki1,haki2,haki3,fecha,rango);	
				seres.push_back(mar);
				creararchivo(mar);
			}

		}
		else if(bando==2){
			string oceano;
			string tripulacio;
			string funcion ;
			cout << "ingrese el oceno :";
			cin >> oceano;
			cout << " ingrese la Tripulacion :";
			cin >> tripulacio;
			cout << " ingrese la funcion";
			cin >>  funcion;
			if(ophak==1){
				if(opfruto==1){
					piratas* pr = new piratas(raza,edad,nombre,parame,haki1,haki2,haki3,oceano,tripulacio,funcion);
					seres.push_back(pr);
					creararchivo(pr);
				}
				else if(opfruto==2){
					piratas* pr = new piratas(raza,edad,nombre,zo2,haki1,haki2,haki3,oceano,tripulacio,funcion);
					seres.push_back(pr);
					creararchivo(pr);
				}
				else if(opfruto==3){
					piratas* pr = new piratas(raza,edad,nombre,log,haki1,haki2,haki3,oceano,tripulacio,funcion);
					seres.push_back(pr);
					creararchivo(pr);
				}
				
			}
			else{
				piratas* pr = new piratas(raza,edad,nombre,haki1,haki2,haki3,oceano,tripulacio,funcion);	
				seres.push_back(pr);
				creararchivo(pr);
			}



		}
		else if(bando==3){
			string fecha;
			cout << "Ingrese la fecha :" ;
			cin >> fecha;
			if(ophak==1){
				if(opfruto==1){
					revolucionario* rv = new revolucionario(raza,edad,nombre,parame,haki1,haki2,haki3,fecha);
					seres.push_back(rv);
					creararchivo(rv);
				}
				else if(opfruto==2){
					revolucionario* rv = new revolucionario(raza,edad,nombre,zo2,haki1,haki2,haki3,fecha);
					seres.push_back(rv);
					creararchivo(rv);
				}
				else if(opfruto==3){
					revolucionario* rv = new revolucionario(raza,edad,nombre,log,haki1,haki2,haki3,fecha);
					seres.push_back(rv);
					creararchivo(rv);
				}
				
			}
			else{
				revolucionario* rv = new revolucionario(raza,edad,nombre,haki1,haki2,haki3,fecha);	
				seres.push_back(rv);
				creararchivo(rv);
			}

		}
		cout << "Desea continuar agregando S/N :" ;
		cin >> resp;
	}// fin while resp

	return 0;
}


void creararchivo(seres* per){
	

	
	string ruta = "./log_nombres/";
		
		
		string archivo = per->getnombre()+".log";
		
		string rutatotal= ruta+archivo;
		FILE* arch;
		
		if(arch = fopen(rutatotal.c_str(),"a"))
			cout << " el archivo a sido creado correctamente" << endl;
		escribir( archivo, per);	

		

}



void escribir(string ruta, seres* per){
	ofstream archivo;
	stringstream stringStream;
	string myString;
	stringStream << "./log_nombres/" << ruta;
	myString = stringStream.str();
	archivo.open(myString.c_str());

	if(archivo.fail()){
		cout << " no se pudo abrir " << endl;
	}
	archivo << "la Raza es:" << per->getraza() << endl;
	archivo << "la edad :" << per->getedad() << endl;
	archivo << " El nombre es : " << per->getnombre() << endl;


	archivo << "haki Observacion:" << per->gethakiob() << endl;
	archivo << "haki armas :" << per->gethakiar() << endl;
	archivo << "haki Rey :" << per->gethakirey() << endl;


	archivo.close();

}