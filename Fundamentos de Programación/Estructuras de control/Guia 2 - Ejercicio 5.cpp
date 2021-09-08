
// Ingrese un número entero e informe: a) si es par o impar; b) si es múltiplo de 5 y 3 a la vez.

#include<iostream>
using namespace std;


int main() {
	int nnumero;
	cout << "Ingrese un numero" << endl;
	cin >> nnumero;
	if ((nnumero%2==0)) {
		cout << "El numero es par" << endl;
	} else {
		cout << "El numero es impar" << endl;
	}
	if ((nnumero%3==0) && (nnumero%5==0)) {
		cout << "El numero es multiplo de 3 y 5" << endl;
	} else {
		cout << "El numero no es multiplo de 3 y 5" << endl;
	}
	return 0;
}

