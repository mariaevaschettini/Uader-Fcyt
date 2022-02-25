
/*Dado un vector numérico de dimensión M escribir un mensaje indicando si el promedio de
los elementos ubicados en posición par es mayor que el promedio de los elementos ubicados
en posición impar. El valor M se ingresa como primer dato.*/


#include <iostream>

using namespace std;

int main (int argc, char *argv[]){
	
	int numeros[100], cantidad_elementos, indice, promedio_pares, promedio_impares, cant_pares =0, cant_impares =0, suma_pares = 0,suma_impares = 0, cont = 0;
	
	cout<<"Ingrese la cantidad de elementos ";
	cin>>cantidad_elementos;
	
	while(cont<cantidad_elementos){
		for(indice=0;indice<cantidad_elementos;indice++){
			
			cout<<"Ingrese un valor ";
			cin>>numeros[indice];
		
				if(indice %2 == 0){
					suma_pares = suma_pares + numeros[indice];
					cant_pares++;
				}else{
					suma_impares = suma_impares + numeros[indice];
					cant_impares++;
				}
			
		cont++;
		}
	}
	
	promedio_pares = suma_pares / cant_pares;
	promedio_impares = suma_impares / cant_impares;
	
	if(promedio_pares>promedio_impares){
		cout<<"El promedio de los elementos ubicados en la posicion par es mayor"<<endl;
	}else{
		cout<<"El promedio de los elementos ubicados en la posicion impar es mayor"<<endl;
	}	
	
	
	return 0;
}
