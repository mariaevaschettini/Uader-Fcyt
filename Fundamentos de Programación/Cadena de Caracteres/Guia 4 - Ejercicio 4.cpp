/*
Ingrese 2 cadenas de caracteres y un valor entero X. Inserte la segunda cadena dentro de
la primera a partir de la posición X, salvo que dicha posición sea inválida.
*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	
	string cadena1, cadena2, cadena3;
	int posicion;
	
	cout<<"Ingrese cadena 1: ";
	getline(cin, cadena1);
	cout<<"Ingrese cadena 2: ";
	getline(cin, cadena2);
	cout<<"Ingrese la posicion para insertar la segunda cadena: ";
	cin>>posicion;
	cout<<endl;
		cadena3 = cadena1.insert(posicion, cadena2);
	cout<<cadena3<<endl;
	
	return 0;
}

