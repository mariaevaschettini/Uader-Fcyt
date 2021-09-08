
// Ingrese un número entero y determine si el mismo es negativo o positivo o cero.

#include<iostream>
using namespace std;

int main() {
	int nnumero;
	cout << "Ingrese numero" << endl;
	cin >> nnumero;
	if (nnumero>0) {
		cout << "El numero es positivo" << endl;
	} else {
		if (nnumero<0) {
			cout << "El numero es negativo" << endl;
		} else {
			cout << "El numero es igual a 0" << endl;
		}
	}
	return 0;
}

