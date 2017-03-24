#include "seres.h"
#include "fruta.h"
#include "logia.h"
#include "zoan.h"
#include "paramecia.h"
#include "marina.h"
#include "revolucionario.h"
#include "piratas.h"
#include <vector>
using namespace std;
int main(){
	vector<fruta*> frutas;
	vector<seres*> seres;

	paramecia* par = new paramecia("Gomumu", "Hombre de goma");
	zoan* zo = new zoan("Hito Hito",  "transformacion"," Humano");
	piratas* pir = new piratas("Humano", 19 , " Monkey D. Luffy" ,par,true,true,true,"East Blue","Piratas de Sombrero De Paja" , "Lider");
	piratas* pir2 = new piratas("Humano", 19 , " Roronoa Zoro " ,true,true,false,"East Blue","Tripulacion de Luffy" , "Espadachin");
	piratas* pir3 = new piratas("Humano", 18 , " Nami" ,false,false,false,"East Blue","Tripulacion de Luffy" , "Navegante");
	piratas* pir4 = new piratas("Humano", 19 , " Usopp" ,true,false,false,"East Blue","Tripulacion De Luffy" , "Francotirado");
	piratas* pir5 = new piratas("Humano", 19 , " Vinsmoke Sanji" ,true,true,false,"North Blue","Tripulacion De Luffy" , "Cocinero");
	piratas* pir6 = new piratas("Reno", 15 , " Tony Tony Chopper" ,zo,false,false,false,"East Blue","Tripulacion de Luffy" , "Medico");

	seres.push_back(pir);
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
		if(f==1){
			string nomfruto;
			int opfruto;
			
			string description;
			cout << "ingrese el nombre del fruto :";
			cin >> nomfruto;
			cout << "ingrese el tipo de fruto 1)paramecia 2)zoan 3)logia :";
			cin >> opfruto;
			if(opfruto==1){
				cout << "ingrese la descripcion :" ;
				cin >> description;
				paramecia* parame = new paramecia(nomfruto,description);
			}
			else if (opfruto==2){
				string tipofruta;
				string animal;
				cout << "ingrese el tipo de fruto:";
				cin >> tipofruta;
				cout << "ingrese el animal :";
				cin >> animal;
				zoan* zo2 = new zoan (nomfruto,tipofruta,animal);
			}
			else if(opfruto==3){
				string elemento;
				cout << "ingrese el elemento :";
				cin >> elemento;
				logia* log = new logia(nomfruto,elemento);
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

			}
			else if(oprango==2){

			}
			else if(oprango==3){

			}
			else if(oprango==4){

			}
			else if(oprango==5){

			}
		}
		else if(bando==2){

		}
		else if(bando==3){

		}
		cout << "Desea continuar agregando S/N :" ;
		cin >> resp;
	}// fin while resp

	return 0;
}
