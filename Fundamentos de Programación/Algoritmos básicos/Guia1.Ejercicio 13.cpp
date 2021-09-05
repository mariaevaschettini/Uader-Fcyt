/* Se desea contar con una aplicación que calcule el ancho de un televisor teniendo
como dato la cantidad de pulgadas del TV y el alto de la pantalla (expresado en cm). Informar
el ancho del TV expresado en cm.*/

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	float An; //ancho del televisor
	float P; //pulgadas
	float H; //altura
	float Pcm; //pulgadas en centimetros
	cout<<"Ingrese cantidad de pulgadas de la tv ";
	cin>>P;
	cout<<"Ingrese el alto de la pantalla ";
	cin>>H;
	Pcm = P * 2.54; 
	An = sqrt(pow(Pcm,2) - pow(H,2));
	cout<<"El ancho de la tv es de "<<An<<"cm."<<endl; 
	
	return 0;
}

