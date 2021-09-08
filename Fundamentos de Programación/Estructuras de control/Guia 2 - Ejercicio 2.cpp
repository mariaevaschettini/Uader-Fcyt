// Ingrese 2 números e infórmelos ordenados de menor a mayor.

#include<iostream>
using namespace std;

int main() {
	int numero1;
	int numero2;
	cout << "Ingrese un numero" << endl;
	cin >> numero1;
	cout << "Ingrese un numero" << endl;
	cin >> numero2;
	cout << "Numeros ordenados de menor a mayor:" << endl;
	if (numero1<numero2) {
		cout << numero1 << endl;
		cout << numero2 << endl;
	} else {
		cout << numero2 << endl;
		cout << numero1 << endl;
	}
	return 0;
}

