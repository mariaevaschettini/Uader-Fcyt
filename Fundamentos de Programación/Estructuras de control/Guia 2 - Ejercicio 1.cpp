// Ingrese 2 números e informe si el primer numero ingresado es el mayor o no.

#include<iostream>
using namespace std;

int main() {
	int numero1;
	int numero2;
	cout << "Ingrese un numero" << endl;
	cin >> numero1;
	cout << "Ingrese un numero" << endl;
	cin >> numero2;
	if ((numero1>numero2)) {
		cout << "El primer numero es mayor que el segundo" << endl;
	} else {
		cout << "El segundo numero es mayor que el primero" << endl;
	}
	return 0;
}

