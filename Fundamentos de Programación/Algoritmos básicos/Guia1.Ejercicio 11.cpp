
/*Escribir un programa que ingrese una cantidad de dinero en pesos y la cotización 
del dólar, euro y real, luego informe: 

a) Su equivalente en Dólares.
b) Su equivalente en Euros. 
c) Su equivalente en Reales. 
*/


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	
	float P; // monto en pesos
	float D; //cotizacion del dolar
	float E; //cotizacion del euro
	float R; //cotizacion del real
	int Md; //monto en dolares 
	int	Me; //monto en euros
	int	Mr; //monto en reales
	cout<<"Ingrese el monto en pesos ";
	cin>>P;
	cout<<"Ingrese cotizacion de dolar ";
	cin>>D;
	cout<<"Ingrese cotizacion de euro ";
	cin>>E;
	cout<<"Ingrese cotizacion de real ";
	cin>>R;
	Md = P * D;
	Me = P * E;
	Mr = P * R;
	cout<<"\n-------------------------------------------------"<<endl;
	cout<<endl;
	cout<<"El monto en dolares es de "<<Md<<endl;
	cout<<"El monto en euros es de "<<Me<<endl;
	cout<<"El monto en reales es de "<<Mr<<endl;
	
	return 0;
}

