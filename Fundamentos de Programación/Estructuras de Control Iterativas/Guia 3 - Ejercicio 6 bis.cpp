/* Realice un algoritmo que informe los múltiplos de 4 menores que 200 (sin incluir este
último).*/
#include<iostream>
using namespace std;


int main() {
	int i;
	int numero1;
	int resultado;
	numero1 = 4;
	resultado = 4;
	i = 2;
	do {
		cout << resultado << endl;
		resultado = numero1*i;
		i = i+1;
	} while (resultado!=200);
	return 0;
}

