#include <iostream>
using namespace std;

/*3. Escribir un programa que lea un vector de 10 números enteros. Deberá mostrar el mismo
vector por pantalla pero invertido. Ejemplo: dado el vector 1 2 3 4 5 6 7 8 9 10 el programa
debería imprimir 10 9 8 7 6 5 4 3 2 1.*/

int main(int argc, char *argv[]) {
	int numero_entero;
	int num[10];
	
	for(numero_entero=0;numero_entero<10;numero_entero++){
		cout<<"Ingrese un numero entero: ";
		cin>>num[numero_entero];	
	}
	
	cout<<"---------------------------------------------------"<<endl;
	for(numero_entero=9;numero_entero>=0;numero_entero--){
		cout<<num[numero_entero]<<endl;
	}
	
	return 0;
}

