/* Un constructor sabe que necesita 0,5 metros cúbicos de arena por metro cuadrado de
revoque a realizar. Hacer un programa donde ingrese las medidas de una pared (largo y alto)
expresada en metros y obtenga la cantidad de arena necesaria para revocarla. */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	
	float H; // altura de la pared
	float L; // largo de la pared
	float metpared; //  metros cuadrados de pared
	float tot; // metros cubicos de arena
	cout<<"Ingrese la altura de la pared en metros ";
	cin>>H;
	cout<<"Ingrese el largo de la pared en metros ";
	cin>>L;
	metpared = H * L;
	tot = 0.5 * metpared;
	cout<<"Se necesitan "<<tot<<" metros cubicos de arena."<<endl;
	return 0;
}

