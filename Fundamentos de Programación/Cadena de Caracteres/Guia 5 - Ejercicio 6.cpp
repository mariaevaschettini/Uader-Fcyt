
/*
Ingrese una cadena de caracteres e informe si la misma tiene más de una palabra, la letra
con la que empieza y la letra con la que termina.
*/

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
	string cadena;
	char n, posicion_inicial, posicion_final;
	
		cout<<"Ingrese una cadena de caracteres: ";
		getline(cin, cadena);
		cout<<endl;
		
		n = cadena.find(" ");
		
		if (n <= 0){
			cout<<"La cadena tiene una sola palabra";
		}else{
			cout<<"La cadena tiene mas de una palabra";
		}
		
		posicion_inicial = cadena[0];
		posicion_final = cadena[cadena.size()-1];
		
		cout<<endl;
		cout<<"La cadena comienza con la letra "<<posicion_inicial<<" y termina con la letra "<<posicion_final<<endl;
		
	return 0;
}

