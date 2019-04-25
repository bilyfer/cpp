#include <iostream>
#include "clientes.h"
#include "mensajes.h"

using namespace std;

struct Cliente {
	string codigo;
	string nombre;
	string telefono;
};

Cliente arrClientes[5];

void cargarDatosdeClientes() {
	arrClientes[0].codigo = "C001";
	arrClientes[0].nombre = "Juan Perez";
	arrClientes[0].telefono = "99-99-99-99";
	
	Cliente cliente2;
	cliente2.codigo = "C002";
	cliente2.nombre = "Jose Martinez";
	cliente2.telefono = "88-88-88-88";
	
	arrClientes[1] = cliente2;
	
	arrClientes[2].codigo = "C003";
	arrClientes[2].nombre = "Maria Gonzalez";
	arrClientes[2].telefono = "99-77-77-77";
	
	arrClientes[3].codigo = "C004";
	arrClientes[3].nombre = "Pedro Hernandez";
	arrClientes[3].telefono = "99-66-66-66";
	
	arrClientes[4].codigo = "C005";
	arrClientes[4].nombre = "Pablo Jiminez";
	arrClientes[4].telefono = "99-55-55-55";		
}

string arregloClientes[5][3] = {
	{ "C001", "Juan Perez", "99-99-99-99"},
	{ "C002", "Jose Martinez", "99-88-88-88"},
	{ "C003", "Maria Gonzalez", "99-77-77-77" },
	{ "C004", "Pedro Hernandez", "99-66-66-66" },
	{ "C005", "Pablo Jimenez", "99-55-55-55" }
};


void clientes() {
	
	cargarDatosdeClientes();
	
	system("cls");

	cout << "Listado de Clientes" << endl;
	cout << "-------------------" << endl;
		
	for(int indice = 0; indice < 5; indice++) {
		cout << arrClientes[indice].codigo << " - " << arrClientes[indice].nombre << endl << " - " << arrClientes[indice].telefono;
	}

	cout << endl;
	cout << endl;
	
	bool salir = false;
	
	while(salir == false) {
		string opcion;
		cout << "presione 'S' y luego enter para salir de esta pantalla" << endl;	
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
				system("PAUSE");
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

