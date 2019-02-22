#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

class Producto {
	public:
		int id;
		string descripcion;
		float precio;
		
		Producto(float costo) {
			precio = costo * 1.5;
		}
		
		aumentarPrecio(float porcentaje) {
			precio = precio + ((precio * porcentaje) / 100);
		}
};

int main(int argc, char** argv) {
	Producto p(100);
	p.descripcion = "Laptop";
	
	p.aumentarPrecio(20);
	
	cout << p.precio << endl;
	
	return 0;
}
