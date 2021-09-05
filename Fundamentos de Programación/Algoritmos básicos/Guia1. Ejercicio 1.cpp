
/*Calcular e informar el perímetro de un cuadrado conociendo el valor del lado.*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	float L; //lado
	float P;//perimetro
	cout<<"Ingrese valor del  lado del cuadrado"<<endl;
	cin>>L;
	P = L * 4;
	cout<<"El perimetro del cuatrdo es "<< P;
	return 0;
}

