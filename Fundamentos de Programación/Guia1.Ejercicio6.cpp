
/*Calcular e informar el número de segundos que hay en una hora determinada que se
ingresa de la forma hhmmss.*/

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	int Hh; //hora completa
	int	Hs; //hora expresada en segundos
	int Aux; //calculo auxiliar para sacar los minutos
	int Ms; //minutos expresados en segundos
	int Ss; //segundos
	int H; //hora sola
	int MM; //minutos
	int HTs; //hora expresada en segundos
	cout<<"Ingresar hora en formato hhmmss";
	cin>>Hh; 
	H = Hh / 10000; 
	Hs = H*pow(60,2); 
	Aux = Hh - ( H * 10000 );
	MM = Aux / 100;
	Ms = MM * 60;
	Ss = Hh - (H*10000 + MM * 100); 
	HTs = Hs + Ms + Ss;
	cout<<"La hora ingresada son "<<HTs<<"segundos";
	
	return 0;
}

