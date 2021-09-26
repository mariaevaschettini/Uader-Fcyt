

#include<iostream>
using namespace std;

// Realice un programa que informe el factorial de un número que se ingresa. Valide que el
// número ingresado sea entero no negativo.

int main() {
	int cont;
	int factorial;
	int numero1;
	cout << "Ingrese un numero entero positivo" << endl;
	cin >> numero1;
	factorial = 1;
	cont = 0;
	if (numero1>0) {
		while (cont<numero1) {
			cont = cont+1;
			factorial = factorial*cont;
		}
		cout << numero1 << "! =" << factorial << endl;
	} else {
		cout << "El numero ingresado debe ser entero positivo. Vuelva a ingresar otro valor" << endl;
	}
	return 0;
}

