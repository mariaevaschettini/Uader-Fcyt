/*Dada una función cuadrática de la que se ingresan los valores de sus coeficientes, informar
 los pares X,Y para un rango de valores enteros de X entre A y B (que se ingresan).
y = ax² + bx + c*/

#include<iostream>
using namespace std;



int main() {
	int coeficiente1;
	int coeficiente2;
	int rango_mayor;
	int rango_menor;
	int term_indep;
	int valory;
	cout << "Ingrese el valor del coeficioente de x2" << endl;
	cin >> coeficiente1;
	cout << "Ingrese el valor del coeficiente de x" << endl;
	cin >> coeficiente2;
	cout << "Ingrese el valor del termino independiente" << endl;
	cin >> term_indep;
	cout << "Ingrese el menor valor de X" << endl;
	cin >> rango_menor;
	cout << "Ingrese el mayor valor de X" << endl;
	cin >> rango_mayor;
	cout << "X | Y" << endl;
	while (rango_menor<=rango_mayor) {
		valory = coeficiente1*rango_menor*rango_menor+coeficiente2*rango_menor+term_indep;
		cout << rango_menor << "|" << valory << endl;
		rango_menor = rango_menor+1;
	}
	return 0;
}

