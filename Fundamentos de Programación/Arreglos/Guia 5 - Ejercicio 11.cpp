

/*
Generar un vector de N elementos con números al azar entre A y B. Luego informar la
suma de los elementos comenzando desde el elemento C hasta X. De los elementos del
intervalo sumar sólo los que se encuentran cada W elementos
*/


#include <time.h>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int numeros_aleatorios[100], cantidad_elementos, limite_superior, limite_inferior, suma, inicio_suma, fin_suma, intervalo_suma;
	
	cout<<"Ingrese la cantidad de numeros aleatoreos que desea obtener. "<<endl;
	cout<<"(El valor debera ser menor a 100): ";
	cin>>cantidad_elementos;
	cout<<"Indique el numero superior para los numeros aleatoreos: ";
	cin>>limite_superior;
	cout<<"Ingrese el numero inferior para los numeros aleatoreos: ";
	cin>>limite_inferior;
	cout<<"Indique el elemento en el que inicia la suma: ";
	cin>>inicio_suma;
	cout<<"Indique el elemento en el que finaliza la suma. "<<endl;
	cout<<"(El valor debera ser menor que la cantidad de numeros aleatoreos seleccionada): ";
	cin>>fin_suma;
	cout<<"Ingrese el intervalo de la suma: ";
	cin>>intervalo_suma;
	
	srand(time(NULL));
	
	suma = 0;
	for(int i=0;i<cantidad_elementos;i++){
		numeros_aleatorios[i] = limite_inferior + rand()% (limite_superior - limite_inferior + 1);
		cout<<i<<". "<<numeros_aleatorios[i]<<endl;
	}
	
	for (int i=inicio_suma; i<=fin_suma; i=i+intervalo_suma){
		suma = suma + numeros_aleatorios[i];
	}
	
	
	cout<<endl;
	cout<<suma;
	return 0;
}
