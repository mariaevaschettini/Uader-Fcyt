
/*Se desea que dada una fecha ingresada de la forma MMDDAA, se la informe de la forma
DD/MM/AAAA.*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	
	int FF; //fecha completa
	int Aux; //mes y dia de la fecha sin el año
	int DD; //dia
	int AA; //año
	int MM; //mes
	cout<<"Ingrese la fecha en formato mmddaa ";
	cin>>FF;
	Aux = FF / 10000;
	AA = FF - Aux * 10000;
	MM = Aux / 100;
	DD =  Aux - MM * 100;
	cout<<"La fecha es "<<DD<<"/"<<MM<<"/"<<AA;
	
	return 0;
}

