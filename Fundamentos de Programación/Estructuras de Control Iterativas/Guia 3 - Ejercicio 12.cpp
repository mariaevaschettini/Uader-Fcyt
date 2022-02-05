
/*
Realice un algoritmo que solicite el ingreso de dos números positivos A y B, donde A es
mayor que B. Se pide mostrar por pantalla su división entera (cociente y resto). No es posible
utilizar los operadores predefinidos para ello (/ y %).

*/


#include <iostream>
using namespace std;
	
	int main(int argc, char *argv[]) {
		int numero1, numero2, cont, resultado, resto;
		cout<<"Ingrese un numero: ";
		cin>>numero1;
		cout<<"Ingrese un numero: ";
		cin>>numero2;
		
		cont = 0;
		resultado = 0;
		while ((numero1 - cont)>= numero2){
			
			resultado = resultado + 1;
			cont = cont + numero2;
		}
		resto = numero1-cont;
		cout<< numero1<<" / "<<numero2<<" = "<<resultado<<endl;
		cout<<numero1<<" % "<<numero2<<" = "<<resto;
		
		return 0;
	}



