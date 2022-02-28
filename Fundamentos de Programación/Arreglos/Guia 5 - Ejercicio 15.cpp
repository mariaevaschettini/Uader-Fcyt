
/*
Escribir un programa que lea una matriz de números enteros, incluyendo valores
negativos. Luego, deberá mostrarse por pantalla, la suma de los elementos positivos de la
matriz y la suma de los elementos negativos.
*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	 int enteros [4][4], positivos, negativos;
	
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			cout<<"Ingrese un valor para la fila "<<i<<" columna "<<j<<": ";	
			cin>>enteros[i][j];
		}
	}
	
	positivos = 0;
	negativos = 0;
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			if(enteros[i][j]> 0){
				positivos = positivos + enteros[i][j];
			}else{
				negativos = negativos + enteros[i][j];
			}
		}
	}
	
	cout<<"La suma de los elementos positivos es "<<positivos<<endl;
	cout<<"La suma de los elementos negativos es "<<negativos<<endl;
	
	return 0;
}

