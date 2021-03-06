#include <iostream>
#include "clientes.h"

using namespace std;

string arregloClientes[5][3] = {
	{ "C001", "Juan Perez", "99-99-99-99", "Si"},
	{ "C002", "Jose Martinez", "99-88-88-88", "No"},
	{ "C003", "Maria Gonzalez", "99-77-77-77", "No" },
	{ "C004", "Pedro Hernandez", "99-66-66-66", "Si" },
	{ "C005", "Pablo Jimenez", "99-55-55-55", "No" }
};

void clientes() {
	system("cls");

	cout << "Listado de Clientes" << endl;
	cout << "-------------------" << endl;
		
	for(int indice = 0; indice < 5; indice++) {
		cout << arregloClientes[indice][0] << " - " << arregloClientes[indice][1] << endl;;
	}

	cout << endl;
	cout << endl;
	
	bool salir = false;
	
	while(salir == false) {
		string opcion;
		cout << "presione 'S' mas enter para salir de esta pantalla" << endl;	
		cin >> opcion;
		
		if (opcion == "S" || opcion == "s") {
			salir = true;
		}
	}
}

bool buscarCliente(string &codigo, string &nombreCliente) {
	while(true) {
		mensajeEnConsola("BUSCAR CLIENTE");
		mensajeEnConsola("--------------");
		saltosDeLinea(2);		
		mensajeConValorEnConsola("Codigo del Cliente: ", codigo);
		
		for(int indice = 0; indice < 5; indice++) {		
			if (arregloClientes[indice][0] == codigo) {
				nombreCliente = arregloClientes[indice][1];
				mensajeEnConsola("--> " + nombreCliente);
				return true;
			}
		}		
			
		bool continuar = false;
		while(continuar == false) {
			system("cls");
			
			string opcion = "";
			mensajeConValorEnConsola("Codigo de cliente no encontrado, desea continuar buscando s/n? ", opcion);
			
			if (opcion == "s" || opcion == "S") {
				continuar = true;
				system("cls");
			}
			if (opcion == "n" || opcion == "N") {
				return false;
			}		
		}
	}
}

