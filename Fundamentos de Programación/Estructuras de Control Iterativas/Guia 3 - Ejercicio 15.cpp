/*
Generar números al azar entre 0 y 999. Detener la generación de números cuando se
haya generado 2 veces consecutivas un número ingresado. Informar la cantidad de números
que fueron generados al momento de la detención.
*/

#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int cont, numero, acumulador, detencion_num;
	
	cout<<"Ingrese el numero para detener la ejecucion de numeros aleatorios: ";
	cin>>detencion_num;
	cout<<endl;
	
	cont = 0;
	acumulador = 0;
	srand(time(NULL));
	
	do{
		
		numero = rand()%999 + 1;
		cout<<numero<<endl;
		cont++;
		
		if (numero == detencion_num){
			acumulador = acumulador + 1;
		}
	}while (acumulador != 2);
	
	cout<<"Se generaron "<<cont<<" numeros"<<endl;
	
	return 0;
}

