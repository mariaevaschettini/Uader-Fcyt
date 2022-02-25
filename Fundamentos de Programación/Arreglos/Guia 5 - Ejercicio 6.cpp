
/*Ingresar 10 números enteros por teclado, almacenarlos en un arreglo y luego mostrar por
	pantalla: la suma y la multiplicación de todos los valores.*/


#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int indice;
	int enteros[10];
	int suma=0;
	int multiplicacion = 1;
	
	for(indice=0;indice<10;indice++){
		cout<<"Ingrese un numero ";
		cin>>enteros[indice];
		}
	
	for(indice=0;indice<10;indice++){
		suma = suma + enteros[indice];
		multiplicacion = multiplicacion * enteros[indice];
	} 
	 cout<<suma<<endl;
	 cout<<multiplicacion<<endl;
	
	return 0;
}

