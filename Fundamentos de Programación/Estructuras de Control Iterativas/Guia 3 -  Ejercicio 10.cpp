/*

Realice un algoritmo que solicite el ingreso de nombres. Finalizar el ingreso cuando se
ingrese un nombre igual al último ingresado. Informar cuantos nombres se ingresaron.

*/
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	string nombre, nombre_ingresado;
	int cont;
	
	cout<<"Ingrese un nombre: ";
	getline (cin, nombre_ingresado);
	cout<<"Ingrese un nombre: ";
	getline (cin, nombre);
	cont = 2;
	while (nombre != nombre_ingresado){
		cout<<"Ingrese un nombre: ";
		getline (cin, nombre_ingresado);
		cout<<"Ingrese un nombre: ";
		getline (cin, nombre);
		if (nombre != nombre_ingresado){
			cont = cont + 2;
		}else{
			cont++;
		}
	}	
	
	cout<<"Se ingresaron "<<cont<<" nombres";
		
	
	return 0;
}

