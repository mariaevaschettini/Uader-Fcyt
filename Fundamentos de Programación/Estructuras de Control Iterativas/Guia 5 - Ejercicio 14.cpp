/*Escribir un programa que lea una matriz de 3 filas y 3 columnas de valores enteros. A
continuación, el programa debe pedir el número de una fila. El programa deberá mostrar por
pantalla, sólo los valores de esa fila.*/



#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	int fila,i, j, enteros[3][3];
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<"Ingrese un numero entero para fila "<<i+1<<" columna "<<j+1<<": ";
			cin>>enteros[i][j];			
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<setw(3)<<enteros[i][j];			
		}
		cout<<endl;
	}
	
	cout<<"ingrese un numero de fila : ";
	cin>>fila;
	
	for(j=0;j<3;j++){
		cout<<enteros[fila-1][j];
	}

	return 0;
}

