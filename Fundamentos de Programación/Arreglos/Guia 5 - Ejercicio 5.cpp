
/*Cargar un arreglo con los números pares comprendidos entre 1 y 100 y mostrarlos por
pantalla en orden ascendente.*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numeros;
	int pares[100];
	
	for(numeros=0;numeros<=100;numeros++){
		if(numeros %2 == 0){
			pares[numeros] = numeros; 
			cout<<pares[numeros]<<endl;
		}
	}
	
	return 0;
}

