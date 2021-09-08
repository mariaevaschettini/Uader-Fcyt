
/*Dada una fecha ingresada de la forma DDMMAA, informarla de el formato largo de
Windows. Ejemplo de dato de ingreso: 300415 / Formato largo: 30 de abril de 2015.*/

#include <iostream>
using namespace std;

int main() {
	int aa; //año
	int aux;// calculo auxiliar
	int dd; //dia 
	int ff; //fecha en formato mmddaa
	string mes; //mes 
	int mm; // mes en formato numerico
	
	cout << "Ingrese la fecha en formato mmddaa " << endl;
	cin >> ff;
	
	mm = ff / 10000;
	aux = ff/100;
	dd = aux - mm * 100;
	aa = ff - aux * 100;
	
	switch (mm) {
	case 1:
		mes = "Enero";
		break;
	case 2:
		mes = "Febrero";
		break;
	case 3:
		mes = "Marzo";
		break;
	case 4:
		mes = "Abril";
		break;
	case 5:
		mes = "Mayo";
		break;
	case 6:
		mes = "Junio";
		break;
	case 7:
		mes = "Julio";
		break;
	case 8:
		mes = "Agosto";
		break;
	case 9:
		mes = "Septiembre";
		break;
	case 10:
		mes = "Octubre";
		break;
	case 11:
		mes = "Noviembre";
		break;
	case 12:
		mes = "Diciembre";
		break;
	}
	cout << "La fecha es " << dd << " de " << mes << " de " << aa << endl;
	return 0;
}

