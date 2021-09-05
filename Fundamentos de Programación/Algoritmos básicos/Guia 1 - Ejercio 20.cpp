/* Un abuelo desea repartir el 2% de sus ingresos entre sus tres nietos en forma proporcional a la edad de ellos. 
   Se ingresa el sueldo cobrado por el abuelo y las edades de sus nietos. 
   Informar el total a repartir y lo que le corresponde a cada uno de los nietos. */

#include<iostream>
using namespace std;


int main() {
	float dinero_nieto1;//dinero para el primer nieto 
	float dinero_nieto2;//dinero para el segundo nieto
	float dinero_nieto3;//dinero para el tercer nieto
	int primer_nieto;//edad primer nieto
	int segundo_nieto;//edad segundo nieto
	float sueldo;//sueldo del abuelo
	float sueldo_repartido;//parte del sueldo a repartir
	int suma_edades;//suma de las edades de los nietos
	int tercer_nieto;//edad del tercer nieto
	
	cout << "Ingresar sueldo cobrado" << endl;
	cin >> sueldo;
	cout << "Ingresar edad del primer nieto" << endl;
	cin >> primer_nieto;
	cout << "Ingresar edad del segundo nieto" << endl;
	cin >> segundo_nieto;
	cout << "Ingresar edad del tercer nieto" << endl;
	cin >> tercer_nieto;
	
	sueldo_repartido = sueldo*0.02;
	suma_edades = primer_nieto+segundo_nieto+tercer_nieto;
	dinero_nieto1 = sueldo_repartido*primer_nieto/suma_edades;
	dinero_nieto2 = sueldo_repartido*primer_nieto/suma_edades;
	dinero_nieto3 = sueldo_repartido*primer_nieto/suma_edades;
	
	cout << "El total a repartir es de $" << sueldo_repartido << endl;
	cout << "El monto a repartir al primer nieto es de $" << dinero_nieto1 << endl;
	cout << "El monto a repartir al segundo nieto es de $" << dinero_nieto2 << endl;
	cout << "El monto a repartir al tercer nieto es de $" << dinero_nieto3 << endl;
	return 0;
}

