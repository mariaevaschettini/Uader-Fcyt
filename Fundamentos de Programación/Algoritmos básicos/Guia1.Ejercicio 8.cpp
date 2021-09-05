
/*Calcular el número de pulsaciones que una persona debe tener por cada 10 
segundos de ejercicio, si la formula es: num. pulsaciones = (220 - edad)/10*/ 

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	int E; //edad
	int P; //numero de pulsaciones
	cout<<"Ingrese su edad ";
	cin>>E;
	P = (220 - E)/10;
	cout<<"Su numero de pulsaciones es de "<<P<<" cada 10 segundos"<<endl;
	return 0;
}

