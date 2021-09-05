/*En un recital se vendieron dos tipos de entradas, a saber: 
popular y platea. El éxito del recital se ocasionó porque se lograron vender 
la totalidad de las plateas y de las populares, 1000 y 3000 respectivamente. 
El precio de la popular fue un 50 % más barato que el de la platea.
Hallar la recaudación total del recital, 
sabiendo que se ingresa como primer dato el precio de la platea. */

#include<iostream>
using namespace std;


int main() {
	
	float descuento; //monto de descuento al precio de populares
	int plateas_vendidas; //cantidad de plateas vendidas
	int populares_vendidas; //cantidad de populares vendidas
	float precio_platea; //precio de la platea
	float precio_populares;// precio de las populares
	float recaudado_platea;//monto recaudado con plateas
	float recaudado_populares;// monto recaudado con populares
	float tot_recaudado;// total recaudado

	plateas_vendidas = 1000;
	populares_vendidas = 3000;
	
	cout << "Ingresar precio de platea " << endl;
	cin >> precio_platea;
	descuento = precio_platea*50/100;
	precio_populares = precio_platea - descuento;
	recaudado_platea = plateas_vendidas*precio_platea;
	recaudado_populares = populares_vendidas*precio_populares;
	tot_recaudado = recaudado_platea+recaudado_populares;
	cout << "La recaudación total del recital es de $" << tot_recaudado << endl;
	
	return 0;
}

