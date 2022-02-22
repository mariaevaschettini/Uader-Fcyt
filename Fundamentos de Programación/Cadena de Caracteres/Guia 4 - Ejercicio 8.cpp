
/*
Ingrese una cadena de caracteres e informe la segunda palabra de la misma.
*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string cadena, subcadena, palabra;
	int largo_total, n, n2;
	
	cout<<"Ingrese una cadena: ";
	getline(cin, cadena);
	cout<<endl;
	
	largo_total = cadena.size();// cantidad de caracteres de la cadena
	n = cadena.find(" ");//posicion en la que finaliza la primera palabra
	subcadena = cadena.substr(n+1, largo_total);//cadena sin la primera palabra
	n2 = subcadena.find(" ");//posicion en la que finaliza la segunda palabra

	palabra = subcadena.substr(0,n2);//segunda palabra
	cout<<"La segunda palabra es: "<<palabra<<endl;
	
	return 0;
}

