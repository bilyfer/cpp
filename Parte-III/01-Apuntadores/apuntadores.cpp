#include <iostream>

using namespace std;

main() {
	int nota;
	int *apuntador1;
	int *apuntador2;
	
	nota = 10;
	 	 
	apuntador1 = &nota;	 
	apuntador2 = &nota;
	 
	cout << "El valor de nota: " << nota << endl;;
	 
	*apuntador1 = 12;
	 
	cout << "El valor de nota despues que el apuntador1 lo modifica: " << nota << endl;

	system("PAUSE");
	
	*apuntador2 = 15;
	
	cout << "El valor de nota despues que el apuntador2 lo modifica: " << nota << endl;
	
	return 0;
}
