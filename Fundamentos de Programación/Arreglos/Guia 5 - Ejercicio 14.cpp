/*Escribir un programa que lea una matriz de 3 filas y 3 columnas de valores enteros. A
continuación, el programa debe pedir el número de una fila. El programa deberá mostrar por
pantalla, sólo los valores de esa fila.*/


#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	int fila,i, j, enteros[4][4];
	
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			cout<<"Ingrese un numero entero para fila "<<i<<" columna "<<j<<": ";
			cin>>enteros[i][j];			
		}
	}
	cout<<endl;
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			cout<<setw(3)<<enteros[i][j];			
		}
		cout<<endl;
	}
	
	cout<<"ingrese un numero de fila : ";
	cin>>fila;
	
	for(j=1;j<=3;j++){
		cout<<setw(3)<<enteros[fila][j];
	}

	return 0;
}

