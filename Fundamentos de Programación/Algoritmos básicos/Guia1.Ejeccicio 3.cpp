
/*Determine la edad de una persona (sin importar si ya ha cumplido años o aún no),
conociendo su año de nacimiento.*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	
	float N; //año de nacimiento
	float A; //año actual
	float E; //edad
	A = 2021;
	cout<<"Ingrese su año de nacimiento "<<endl;
	cin>>N;
	E = A - N;
	cout<<"Su edad es "<<E<<endl;
	
	return 0;
}

