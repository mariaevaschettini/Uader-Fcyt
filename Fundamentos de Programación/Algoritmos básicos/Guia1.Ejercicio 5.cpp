
/*Se desea que dada una fecha ingresada de la forma MMDDAA, se la informe de la forma
DD/MM/AAAA. */

//Aclaracion: El codigo solo es valido para años del 2000 al 2999

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	
	int FF; //fecha completa
	int Aux; //mes y dia de la fecha sin el año
	int DD; //dia
	int AAAA; //año
	int MM; //mes
	cout<<"Ingrese la fecha en formato mmddaa ";
	cin>>FF;

	MM = FF / 10000;
	Aux = FF /100; 
	DD = Aux - MM * 100;
	AAAA = (FF - Aux * 100)+2000;
		
	cout<<"La fecha es "<<DD<<"/"<<MM<<"/"<<AAAA;
	
	return 0;
}

