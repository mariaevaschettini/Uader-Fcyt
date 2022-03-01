/*
Escribir un programa que lea una matriz de enteros de 4 filas y 4 columnas y a
continuación intercambie la fila i con la fila j, siendo i y j dos valores introducidos por teclado.
*/

#include <iomanip>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int enteros[5][5], aux_enteros[5][5], primera_fila, segunda_fila;
	
	for (int i=1;i<=4;i++){
		for(int j=1;j<=4;j++){
			cout<<"Ingrese el valor de la fila "<<i<<" columna "<<j<<": ";
			cin>>enteros[i][j];
		}
	}
	for (int i=1;i<=4;i++){
		for(int j=1;j<=4;j++){
			cout<<setw(4)<<enteros[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"Indique la primera fila a intercambiar: ";
	cin>>primera_fila;
	cout<<"Indique la segunda fila a intercambiar: ";
	cin>>segunda_fila;
	cout<<endl;
	
		
		
		for(int j=1; j<=4;j++){
			aux_enteros[primera_fila][j] = enteros[primera_fila][j];
			enteros[primera_fila][j] = enteros[segunda_fila][j];
			enteros[segunda_fila][j] = aux_enteros[primera_fila][j];
		}
		
		
		for (int i=1;i<=4;i++){
			for(int j=1;j<=4;j++){
				cout<<setw(3)<<enteros[i][j];
			}
			cout<<endl;
		}
		
	return 0;
}

