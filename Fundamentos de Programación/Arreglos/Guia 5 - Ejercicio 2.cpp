#include <iostream>
using namespace std;

/*2. Escribir un programa que pida 10 n�meros enteros por teclado, los almacene en un vector
	llamado NUM y luego emita los siguientes informes:
	i. Cu�ntos de esos n�meros son pares.
	ii. Cu�l es el valor del n�mero m�ximo.
	iii. Cu�l es el valor del n�mero m�nimo.*/

int main(int argc, char *argv[]) {
	int num[10];
	int numero_entero;
	int mayor = 0;
	int menor;
	
	for (numero_entero=0;numero_entero<10; numero_entero++){
		cout<<"Ingrese un numero entero:  ";
		cin>>num[numero_entero];
	}
	menor = mayor;
	int cont = 0;
	for (numero_entero=0;numero_entero<10; numero_entero++){
		if(num[numero_entero]>mayor){
			mayor = num[numero_entero];
			
		}
		if (numero_entero<menor || menor == 0){
		menor = num[numero_entero];
		}
		if (num[numero_entero]% 2 == 0){
		cont++;
		}
	}
	
	cout<<"--------------------------------------
		---------------------"<<endl;
	
	cout<<"La cantidad de numeros pares es de: "<<cont<<endl;
	cout<<"El valor maximo es: "<<mayor<<endl;
	cout<<"El valor minimo es: "<<menor<<endl;


	
	return 0;
}

