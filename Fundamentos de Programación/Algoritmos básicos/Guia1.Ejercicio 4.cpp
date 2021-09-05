
/*Determinar e informar, el INDICE DE MASA CORPORAL (IMC) de una persona. Para ello
se conoce: su peso (en kgs) y su estatura (en metros).*/

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	float P; //peso 
	float E; //estatura
	int IMC; //indice de masa corporal
	cout<<"Ingrese su peso ";
	cin>>P;
	cout<<"Ingrese su estatura ";
	cin>>E;
	IMC = P/pow(E,2);
	cout<<"Su indice de masa corporal es "<<IMC<<endl;
	return 0;
}

