/*
Calcular la media de X cantidad de números, para lo cual se ingresarán valores enteros
reiteradamente, siendo el fin de la carga, un valor igual a 0. Informar el valor medio y la
cantidad de datos ingresados.
*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int cont, media, acumulador, numero;
	
	cout<<"Ingrese un valor: ";
	cin>>numero;
	cont = 0;
	acumulador = 0;
	
	while (numero !=0){
		acumulador = acumulador + numero;
		cont++;
		cout<<"Ingrese un valor: ";
		cin>>numero;
	}
	media = acumulador / cont;
	cout<<"La media es de: "<<media<<endl;
	cout<<"La cantidad de datos ingresados es de: "<<cont;
	
	return 0;
}

