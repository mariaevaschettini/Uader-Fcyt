#include <iostream>
using namespace std;

/*1. a) Declarar un vector llamado n�meros con la capacidad suficiente para almacenar las
	edades de todos los alumnos de la comisi�n.
	b) Ingresar la cantidad de alumnos que posee la comisi�n y luego almacenar en el vector las
	edades de todos los alumnos.
	c) Ingresar una posici�n y informar la edad almacenada en ella. Repetir c) hasta que se
	ingrese una posici�n no v�lida.*/

int main(int argc, char *argv[]) {
	int pos;
	int numeros[100];
	int cant_alumnos;
	int cont=0;
	
	cout<<"Ingrese la cantidad de alumnos: ";
	cin>>cant_alumnos;
	while(cont<cant_alumnos){
		cout<<"Ingrese la edad de un alumno: ";
		cin>>numeros[cont];
		cont++;
	}
	
	cout<<"Ingrese una posicion: ";
	cin>>pos;
	cout<<"Edad: "<<numeros[pos-1];
	cout<<endl;
	cont = 1;
	while(cont<cant_alumnos){
		cout<<"Ingrese una posicion: ";
		cin>>pos;
		cout<<"Edad: "<<numeros[pos-1];
		cout<<endl;
		cont++;
	}
		
	
	return 0;
}

