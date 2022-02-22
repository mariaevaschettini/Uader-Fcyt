
/*
Ingresar una cadena de caracteres y luego 2 valores que representan la posición inicial y la
final. Informar la subcadena comprendida entre ambas posiciones.

*/
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string cadena, subcadena;
	int posicion_inicial, posicion_final;
	
	cout<<"Ingrese una cadena de caracteres: ";
	getline(cin, cadena);
	cout<<"Ingrese la pisicion inicial de la subcadena: ";
	cin>>posicion_inicial;
	cout<<"Ingrese la posicion final de la subcadena:  ";
	cin>>posicion_final;
	
	subcadena = cadena.substr(posicion_inicial, posicion_final);
	
	cout<<"La subcadena es "<<subcadena<<endl;
	
	return 0;
}

