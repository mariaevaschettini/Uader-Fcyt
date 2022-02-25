/*Ingresar 5 números enteros por teclado. Luego, generar un nuevo arreglo, donde sus
	elementos sean los del arreglo anterior, pero multiplicados por 3. Mostrar por pantalla el
	segundo arreglo.
*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int indice;
	int enteros[5];
	int enteros2[5];
	
	for(indice=0;indice<5;indice++){
		cout<<"Ingrese un numero entero ";
		cin>>enteros[indice];
	}
	
	for(indice=0;indice<5;indice++){
		 enteros2[indice] = enteros[indice]*3;
		 cout<<enteros2[indice]<<endl;
	}
	
	return 0;
}

