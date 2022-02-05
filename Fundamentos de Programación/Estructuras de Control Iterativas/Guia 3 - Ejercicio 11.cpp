/*
Realice un algoritmo que solicite el ingreso de dos números positivos y muestre por
pantalla su producto. No es posible utilizar el operador de multiplicación (*) directamente.
*/


#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero1, numero2, cont, resultado;
	cout<<"Ingrese un numero: ";
	cin>>numero1;
	cout<<"Ingrese un numero: ";
	cin>>numero2;
	
	cont = 0;
	resultado = 0;
	while (cont<numero2){
		cont++;
		resultado = resultado + numero1;
	}
	
	cout<<numero1<<" X "<<numero2<<" = "<<resultado;
	
	return 0;
}

