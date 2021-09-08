
/* Dadas las longitudes de los lados de un triángulo, determinar el tipo de triángulo
(equilátero, isósceles o escaleno) e informar su perímetro y su tipo. */

#include<iostream>
using namespace std;


int main() {
	string mensaje; // tipo de triangulo
	float lado1; // longitud lado 1 del triangulo
	float lado2; // longitud lado 2 del triangulo
 	float lado3; //longitud lado 3 del triangulo
	float perimetro; // perimetro del triangulo
	cout << "Ingrese 1er lado: " << endl;
	cin >> lado1;
	cout << "Ingrese 2do lado: " << endl;
	cin >> lado2;
	cout << "Ingrese 3er lado: " << endl;
	cin >> lado3;
	if (lado1==lado2) {
		if (lado1==lado3) {
			mensaje = "Equilatero";
		} else {
			mensaje = "Isoseles";
		}
	} else {
		if (lado1==lado3) {
			mensaje = "Isosceles";
		} else {
			if (lado2==lado3) {
				mensaje = "Isoseles";
			} else {
				mensaje = "Escaleno";
			}
		}
	}
	perimetro = lado1+lado2+lado3;
	cout << "Tipo de Triangulo: " << mensaje << endl;
	cout << "Perimetro del triangulo: " << perimetro << endl;
	return 0;
}

