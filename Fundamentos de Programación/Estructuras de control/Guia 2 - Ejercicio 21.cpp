/*

YPF Serviclub otorga puntos canjeables por premios por las cargas de combustibles en
sus estaciones de servicio. Los tipos de combustibles están codificados: 1) INFINIA
, 2) SÚPER
, 3) INFINIA DIESEL
, 4) ULTRADIESEL
y 5) DIESEL 500

Los puntos se asignan de acuerdo a la siguiente tabla:
INFINIA 6 puntos $10,00
INFINIA DIESEL 2 puntos $10,00
SÚPER 3 puntos $ 6,00
ULTRADIESEL 4 puntos $ 4,00
DIESEL 500 2 puntos $ 4,00

Pero, además, si la carga supera los $250 se duplican los puntos obtenidos, sin importar el
tipo de combustible cargado. Se ingresan los datos de una carga: el importe cargado y el
código del combustible. Informar los puntos obtenidos por dicha carga.


*/


#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int importe_carga, codigo_combustible, aux, puntos;
	
	cout<<endl;
	cout<<"---------------------------YPF SERVICLUB------------------------"<<endl;
	cout<<"Canje de Puntos";
	cout<<endl;
	cout<<"Ingrese el importe del combustible cargado: $";
	cin>>importe_carga;
	cout<<"Ingrese el tipo de combustible segun su codigo."<<endl;
	cout<<"1. INFINIA"<<endl;
	cout<<"2. SUPER"<<endl;
	cout<<"3. INFINIA DIESEL"<<endl;
	cout<<"4. ULTRADIESEL"<<endl;
	cout<<"5. DIESEL 500"<<endl;
	cout<<"Codigo de combustible. (1 a 5): ";
	cin>>codigo_combustible;
	cout<<endl;
	
	aux = 0;
	puntos = 0;
	
	switch (codigo_combustible){
		
	case 1:
		if (importe_carga>= 10){
			aux = importe_carga / 10;
			puntos = aux * 6; 
		}else{
			puntos = 0;
		}; break;
	case 2:
		if (importe_carga>= 10){
			aux = importe_carga / 10;
			puntos = aux * 2; 
		}else{
			puntos = 0;
		}; break;
		
	case 3:
		if (importe_carga>= 6){
			aux = importe_carga / 6;
			puntos = aux * 3; 
		}else{
			puntos = 0;
		}; break;
	case 4:
		if (importe_carga>= 4){
			aux = importe_carga / 4;
			puntos = aux * 4; 
		}else{
			puntos = 0;
		}; break;
	case 5:
		if (importe_carga>= 4){
			aux = importe_carga / 4;
			puntos = aux * 2; 
		}else{
			puntos = 0;
		}; break;
	}
	
	if (importe_carga>250){
		puntos = puntos * 2;
		cout<<"El cliente obtuvo: "<<puntos<<" puntos";
	}else{
		cout<<"El cliente obtuvo: "<<puntos<<" puntos";
	}
	
	
	
	return 0;
}

