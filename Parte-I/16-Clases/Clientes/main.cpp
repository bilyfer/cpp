#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

class Cliente {
	public:
		int Codigo;
		string Nombre;
		string Apellido;

		Cliente(string nombre, string apellido) {
			Codigo = 1;
			Nombre = nombre;
			Apellido = apellido;
		}
		
		string nombreCompleto() {
			if (Nombre != "" && Apellido != "") {
				return Nombre + " " + Apellido;
			}
			
			if (Nombre == "") {
				return Apellido;
			} else {
				return Nombre;
			}									
		}
		
		void limpiarNombre() {
			Nombre = "";	
		}
		
		void limpiarApellido() {
			Apellido = "";	
		}		
};

int main(int argc, char** argv) {
	Cliente cliente("Juan", "Perez");
	string c = cliente.nombreCompleto();
	
	cout << c << endl;
	
	cliente.limpiarNombre();
	c = cliente.nombreCompleto();
	
	cout << c << endl;
	
	return 0;
}
