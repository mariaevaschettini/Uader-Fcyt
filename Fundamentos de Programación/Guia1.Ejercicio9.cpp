
/*Se desea conocer el valor del costo de un producto. Se conoce: el precio de 
venta y su porcentaje de ganancia.*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	
	float V; //precio de venta del producto
	float PorGan; //porcentaje de ganacia
	float Cost; //costo
	float Aux; //ganancia
	cout<<"Ingrese en precio de venta del producto ";
	cin>>V;
	cout<<"Ingrese el porcentaje de ganancia ";
	cin>>PorGan;
	Aux = V*PorGan/100; 
	Cost = V - Aux; 
	cout<<"El costo del producto de $"<<Cost;
	
	return 0;
}

