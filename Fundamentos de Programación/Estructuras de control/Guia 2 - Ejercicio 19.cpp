
/*


Una inmobiliaria que alquila departamentos ha dividido la ciudad en tres zonas:
1 - centro
2 - residencial
3 - barrio
El importe mensual a pagar por el inquilino corresponde al precio base del departamento más
el importe correspondiente a impuestos y comisiones, los cuales dependen de la zona de
ubicación del inmueble, de acuerdo a las siguientes pautas:
Zona Impuestos y comisiones
1 15% sobre el precio del alquiler
2 10% “
3 8 % “
Se desea calcular el monto total del alquiler de un departamento y para ello se ingresa el
precio del alquiler y la zona donde se encuentra la vivienda (1, 2 ó 3).
Informar el precio base del alquiler, el monto de impuestos y comisiones y el total a pagar por
el inquilino con leyendas indicativas.

*/


#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int monto_base, zona_vivienda, impuestos_com, monto_total;
	
	cout<<"Ingrese el precio base del alquiler: ";
	cin>>monto_base;
	cout<<"Ingrese la zona de la vivienda. (1, 2 o 3): ";
	cin>>zona_vivienda;
	
	switch (zona_vivienda){
	case 1: 
		impuestos_com = (monto_base * 15 )/ 100;
		monto_total = impuestos_com + monto_base; break;
	case 2:
		impuestos_com = (monto_base * 10)/ 100;
		monto_total = impuestos_com + monto_base; break;
	case 3:
		impuestos_com = (monto_base * 8)/ 100;
		monto_total = impuestos_com + monto_base; break;	
	}
	cout<<endl;
	cout<<"--------------------------DEPARTAMENTO--------------------"<<endl;
	cout<<"PRECIO BASE DE ALQUILER: "<<monto_base<<endl;
	cout<<"MONTO DE IMPUESTOS Y COMISIONES: "<<impuestos_com<<endl;
	cout<<"TOTAL A PAGAR: "<<monto_total<<endl;
	
	return 0;
}

