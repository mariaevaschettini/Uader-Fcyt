
/*Generar un vector numérico de N elementos, luego ingrese por cada elemento: posición en
el vector y valor a asignar. El valor N se ingresa como primer dato.*/

#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
	int numeros[100];
	int cantidad_elementos, indice,i, cont=0;
	
	cout<<"Ingrese cantidad de elementos ";
	cin>>cantidad_elementos;
	cout<<endl;
	
	while(cont<cantidad_elementos){
	cout<<"Ingrese la posicion en el vector ";
	cin>>indice;
	cout<<"Ingrese el valor a asignar ";
	cin>>numeros[indice];
	cont++;
	cout<<endl;
	}
	for(i=0;i<cantidad_elementos;i++){
		cout<<numeros[i]<<endl;
	}
	
	return 0;
}
