
/* Determinar e informar, el INDICE DE MASA CORPORAL (IMC) de una persona. Para ello
se conoce: su peso (en kgs) y su estatura (en metros).  Informar el resultado de acuerdo a la siguiente tabla:

[0..18,5) – Debajo del normal
[18,5..25) – Normal
[25..30) – Sobrepeso
[30 y más] - Obesidad */

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float e; //estatura
	float imc; // indice de masa corporal
	float p; //peso
	cout << "Ingrese su peso " << endl;
	cin >> p;
	cout << "Ingrese su estatura " << endl;
	cin >> e;
	imc = p/pow(e,2);
	if (imc<18.5) {
		cout << "Su indice de masa corporal es " << imc << " - Debajo de lo normal" << endl;
	} else {
		if (imc>18.5 && imc<25) {
			cout << "Su indice de masa corporal es " << imc << " -  Normal" << endl;
		} else {
			if (imc>25 && imc<30) {
				cout << "Su indice de masa corporal es " << imc << " - Sobrepeso" << endl;
			} else {
				cout << "Su indice de masa corporal es " << imc << " - Obesidad" << endl;
			}
		}
	}
	return 0;
}

