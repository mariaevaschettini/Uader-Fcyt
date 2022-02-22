
/*

Se desea generar una dirección de correo en base a la información ingresada por un
estudiante. Se ingresa: nombre, apellido, fecha de nacimiento (DD/MM/AAAA) y facultad.
La dirección de correo se forma de la siguiente manera:
Primer letra del nombre + Apellido + DDMM + “@” + facultad + “.edu.ar”

*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string nombre, apellido, fecha_nacimiento, facultad, subcadena, correo;
	char primera_letra;
	
	cout<<"Ingrese nombre: ";
	getline(cin, nombre);
	cout<<"Ingrese apellido: ";
	getline(cin, apellido);
	cout<<"Ingrese fecha de nacimiento: (ddmmaaaa)";
	getline(cin, fecha_nacimiento);
	cout<<"Ingrese facultad: ";
	getline(cin, facultad);
	cout<<endl;

		primera_letra = nombre[0];
		subcadena = fecha_nacimiento.substr(0,4);
		correo = primera_letra + apellido +	subcadena + "@" + facultad + ".edu.ar";

	cout<<correo<<endl;	
	return 0;
}

