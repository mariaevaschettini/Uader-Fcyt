
#include<iostream>
using namespace std;

// Realice un algoritmo que solicite el ingreso de un número (entero positivo) e informe su
// tabla de multiplicar (del 1 al 10).
int main() {
	int i;
	int numero1;
	int resultado;
	cout << "Ingrese un numero, el mismo debera ser entero y positivo:" << endl;
	cin >> numero1;
	for (i=1;i<=10;i++) {
		resultado = numero1*i;
		cout << numero1 << "*" << i << "=" << resultado << endl;
	}
	return 0;
}

