

#include<iostream>
using namespace std;


// Realice un algoritmo que solicite el ingreso de 2 números A y B. Donde A debe ser menor
// que B. Luego liste los números comprendidos entre A y B, incluyéndolos.
int main() {
	int i;
	int numero1;
	int numero2;
	cout << "Ingrese un numero entero:" << endl;
	cin >> numero1;
	cout << "Ingrese un numero mayor que el anterior:" << endl;
	cin >> numero2;
	if (numero1<numero2) {
		for (i=numero1;i<=numero2;i++) {
			cout << i << endl;
		}
	} else {
		cout << "El primer numero ingresado es mayor que el segundo. Vuelva a ingresar los dos valores." << endl;
	}
	return 0;
}

