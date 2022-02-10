
/*
Escriba un programa que solicite números al usuario hasta que se hayan introducido 10
números o la suma de todos los números leídos sea mayor que 100. A continuación mostrar
un mensaje indicando qué condición se ha cumplido (es decir, si se han introducido 10
números o si su suma es mayor que 100).

*/


#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero, cont, total;
	
	cont = 0;
	total = 0;
	
	cout<<"Ingrese un numero: ";
	cin>>numero;
	while(cont < 10 || total < 100){
		total = total + numero;
		cont++;
		
		if (cont == 10){
			cout<<"Se han ingresado 10 numeros"<<endl;
		}else if (total > 100){
			cout<<"La suma de los numeros ingresados supera 100"<<endl;
		}
		cout<<"Ingrese un numero: ";
		cin>>numero;
		
	}
	
	
	
	
	return 0;
}

