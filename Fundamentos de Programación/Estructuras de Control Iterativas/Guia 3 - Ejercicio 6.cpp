

#include<iostream>
using namespace std;

/*Realice un algoritmo que informe los múltiplos de 4 menores que 200 (sin incluir este
último).*/
int main() {
	int i;
	int numero1;
	int resultado;
	numero1 = 4;
	for (i=1;i<=200;i++) {
		resultado = numero1*i;
		if (resultado<200) {
			cout << resultado << endl;
		}
	}
	return 0;
}

