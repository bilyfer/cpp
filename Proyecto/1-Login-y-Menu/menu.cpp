#include <iostream>
#include "menu.h"
#include "rentar.h"
#include "ventas.h"
#include "clientes.h"
#include "juegos.h"

using namespace std;

void menu() {	
	bool salir = false;
	
	while(salir == false) {
		int opcion;
		
		cout << "MENU PRINCIPAL" << endl;
		cout << "--------------" << endl;
		cout << endl;
		cout << "1 - Rentar Juegos" << endl;
		cout << "2 - Ventas" << endl;
		cout << "3 - Clientes" << endl;
		cout << "4 - Juegos" << endl;
		cout << "5 - Salir" << endl;
		
		cout << endl;
		cout << endl;				
		cout << "Ingrese un numero del menu y presione enter --> ";
		cin >> opcion;
		
		switch(opcion) {
			case 1:
				rentar();
				break;	
			case 2:
				ventas();
				break;
			case 3:
				clientes();
				break;
			case 4:
				juegos();
				break;
			case 5:
				salir = true;	
			default: 		
				break;
		}
		
		 system("CLS");		
	}
}

