
/*

Cargar un vector con N palabras. Luego intercambiar los valores del vector: el 1ero con el
enésimo, el 2do con el enésimo -1, y así sucesivamente. Informar en 2 strings el vector
original y el intercambiado.

*/

#include <iostream>
#include <string>

using namespace std;

int main (int argc, char* argv[]){
	
	int cant_palabras, i;
	string palabras[100], invertido[100];
	
	cout<<"Ingrese la cantidad de palabras: ";
	cin>>cant_palabras;
	
	cin.get();
	for(i=0;i<cant_palabras;i++){
		cout<<"Ingrese una palabra: ";
		getline(cin, palabras[i]);		
	}
	
	cout<<endl;
	
	for(i=0;i<cant_palabras;i++){
			cout<<palabras[i]<<endl;
			
	}
	cout<<endl;
	for(i=cant_palabras-1;i>=0;i--){
		invertido[i] = palabras[i];
		cout<<invertido[i]<<endl;
	}

	return 0;
}
