
/*Determine la edad de una persona (sin importar si ya ha cumplido a�os o a�n no),
conociendo su a�o de nacimiento.*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	
	float N; //a�o de nacimiento
	float A; //a�o actual
	float E; //edad
	A = 2021;
	cout<<"Ingrese su a�o de nacimiento "<<endl;
	cin>>N;
	E = A - N;
	cout<<"Su edad es "<<E<<endl;
	
	return 0;
}

