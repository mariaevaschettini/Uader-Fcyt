
/*Calcule el porcentaje de hombres y mujeres que hay en una población de la cual se conoce
la cantidad de mujeres y el total general.*/

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	float CH; //cantidad de habitantes hombres
	float CM; //cantidad de habitantes mujeres
	float M; //porcentaje de mujeres
	float H; //porcentaje de hobres
	float TP; //total de habitantes
	cout<<"Ingrese cantidad de habitantes mujeres ";
	cin>>CM;
	cout<<"Ingrese total de habitantes ";
	cin>>TP;
	CH = TP - CM;
	M = ( 100 * CM ) / TP;
	H = (100 * CH) / TP;
	cout<<"El porcentaje de habitantes hombres es de "<<H<<"%"<<endl;
	cout<<"El porcentaje de habitantes mujeres es de "<<M<<"%"<<endl;
	
	return 0;
}

