/*
	1) Redimensione el arreglo unidimensional para almacenar las siguientes palabras (3ptos):
		a) luz azul
		b) introduccion
		c) yo soy
		d) amor a roma
		e) nota final
		
	2) Cree un ciclo for para recorrer el arreglo y determinar si cada palabra en el arreglo es palindroma 
		e imprima el resultado "Es palindroma" o "No es palindroma". (4ptos)
	
	3) Ordene su arreglo en forma ascendente utilizando el metodo de burbuja y luego de ordenarlo imprima el resultado. (4ptos)
	
	string temp;
	for(int i=0;i<5;i++) {
		for(int j=i+1;j<5;j++) {
			if (arreglo[j]<arreglo[i])	{
				temp=arreglo[j];
				arreglo[j]=arreglo[i];
				arreglo[i]=temp;
			}
		}
	}
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int palindroma(char palabra[],int ini, int fin){
     if(ini >= fin)
          return 1;
     if(palabra[ini] == palabra[fin])
          palindroma(palabra, ini+1, fin-18);
    else return 0;
}

int main () {
	string arreglo[1];
	arreglo[0] = "luz azul";

	//determina si la paralabra es palindroma para el elemento 0 del arreglo
	int n = arreglo[0].length();
	char palabra[n+1];
	strcpy(palabra, arreglo[0].c_str()); 
	
	if (palindroma(palabra, 0, n - 1) == 1) {
		cout << palabra << ": es palindroma" << endl;
	} else {
		cout << palabra << ": no es palindroma" << endl;
	}

	return 0;
}

