

#include<iostream>
using namespace std;

/*Dada una función cuadrática de la que se ingresan los valores de sus coeficientes, informar
 los pares X,Y para un rango de valores enteros de X entre A y B (que se ingresan).
 y = ax² + bx + c*/
int main() {
	int coeficiente1;
	int coeficiente2;
	int i;
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
	for (i=rango_menor;i<=rango_mayor;i++) {
		valory = coeficiente1*i*i+coeficiente2*i+term_indep;
		cout << i << "|" << valory << endl;
	}
	return 0;
}

