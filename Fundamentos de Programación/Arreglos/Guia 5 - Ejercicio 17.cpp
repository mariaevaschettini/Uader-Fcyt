/*Escribir un programa que lea una matriz de 4 filas y 3 columnas, la visualice por pantalla y
a continuación encuentre el mayor y el menor elemento de la matriz y sus posiciones.


REVISAR!!!!
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char* argv[]){
	int enteros[5][4];
	int mayor = 0;
	int i, j, fila_menor, columna_menor, fila_mayor, columna_mayor, menor;
	
	for(i=1;i<=4;i++){
		for(j=1;j<=3;j++){
			cout<<"Ingrese un numero entero para la fila "<<i<<" columna "<<j<<": ";
			cin>>enteros[i][j];
		}
	}
	cout<<endl;
	cout<<"MATRIZ"<<endl;
	cout<<endl;
	
	for(i=1;i<=4;i++){
		for(j=1;j<=3;j++){
			cout<<setw(5)<<enteros[i][j];
		}
		cout<<endl;
	}
	menor = enteros[1][1];
	fila_menor = 1;
	columna_menor = 1;
	for(i=1;i<=4;i++){
		for(j=1;j<=3;j++){
			if(mayor<enteros[i][j]){
				mayor = enteros[i][j];
				fila_mayor = i;
				columna_mayor = j;
			}else if(menor>=enteros[i][j]){
				menor = enteros[i][j];
				fila_menor = i;
				columna_menor = j;
			}
		}
	}
	cout<<"El menor valor es "<<menor<<" ubicado en la fila "<<fila_menor<<" columna "<<columna_menor<<endl;
	cout<<"El mayor valor es "<<mayor<<" ubicado en la fila "<<fila_mayor<<" columna "<<columna_mayor<<endl;
	
	return 0;
}
