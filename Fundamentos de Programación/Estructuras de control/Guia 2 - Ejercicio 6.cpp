
// Ingrese tres números enteros; determine e informe el mayor de ellos.

#include<iostream>
using namespace std;

int main() {
	int numero1;
	int numero2;
	int numero3;
	cout << "Ingrese un numero" << endl;
	cin >> numero1;
	cout << "Ingrese un numero" << endl;
	cin >> numero2;
	cout << "Ingrese un numero" << endl;
	cin >> numero3;
	if (numero1>numero2 && numero1>numero3) {
		cout << numero1 << " es el mayor numero" << endl;
	} else {
		if (numero2>numero1 && numero2>numero3) {
			cout << numero2 << " es el mayor numero" << endl;
		} else {
			cout << numero3 << " es el mayor numero" << endl;
		}
	}
	return 0;
}

