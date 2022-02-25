#include <iostream>
using namespace std;

/*4. Escribir un programa que lea 10 números enteros por teclado. Luego ingrese un valor
	entero e indique si este número está entre los almacenados en el arreglo.*/

int main(int argc, char *argv[]) {
	int numero_entero;
	int valor_ent;// valor entero de comparacion
	int num[10];
	int ver_num;//variable para verificar que el numero este en el arreglo.
	
	for (numero_entero=0;numero_entero<10;numero_entero++){
		cout<<"Ingrese un numero: ";
		cin>>num[numero_entero];
	}
	cout<<"Ingrese un valor entero de comparacion: ";
	cin>>valor_ent;
	
	for (numero_entero=0;numero_entero<10;numero_entero++){
		if (valor_ent==num[numero_entero]){
			cout<<"El numero se encuentra almacenado en la posicion: "<<numero_entero<<endl;
			ver_num=0;
		}
	}
	if(ver_num>0){
			cout<<"El numero no se encuentra almacenado";
		}
	
	return 0;
}

