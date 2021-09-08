
// Ingrese los valores de alto y ancho de una figura e informe si la misma es oblonga o apaisada.

#include<iostream>
using namespace std;

int main() {
	float alto;
	float ancho;
	cout << "Ingrese el alto de la figura" << endl;
	cin >> alto;
	cout << "Ingrese el ancho de la figura" << endl;
	cin >> ancho;
	if (alto>ancho) {
		cout << "La figura es oblonga" << endl;
	} else {
		cout << "La figura es apaisada" << endl;
	}
	return 0;
}

