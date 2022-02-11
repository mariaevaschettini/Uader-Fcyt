/*
Se sabe que el impuesto automotor se calcula en base al valor del vehículo y a su
categoría (1, 2, 3 ó 4).
Por cada categoría se cobra un porcentaje distinto sobre el valor del vehículo. Dichos
porcentajes se ingresan al principio.
Luego, por cada vehículo se ingresa: patente, marca, valor y categoría. Se sabe que el
parque automotor es de 5.000 vehículos.
Se desea calcular e informar:
a) Por cada vehículo: patente, valor, y el total a pagar en concepto de impuesto.
b) El total a recaudar por el impuesto automotor.


*/

#include <string>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	string marca, patente;
	int cont, valor, categoria, cat1_porcentaje, cat2_porcentaje, cat4_porcentaje, cat3_porcentaje, total_pagar, tot_recaudacion;
	
	cout<<"--------------------------IMPUESTO AUTOMOTOR-----------------------"<<endl;
	cout<<"Ingrese los porcentajes a cobrar segun la categoria: "<<endl;
	cout<<"Categoria 1: ";
	cin>>cat1_porcentaje;
	cout<<"Categoria 2: ";
	cin>>cat2_porcentaje;
	cout<<"Categoria 3: ";
	cin>>cat3_porcentaje;
	cout<<"Categoria 4: ";
	cin>>cat4_porcentaje;

	
	cont = 0;
	tot_recaudacion = 0;
	
	while (cont < 5){
		cout<<endl;
		cout<<"Vehiculo"<<endl;
		cout<<"Patente: ";
		cin.ignore();
		getline(cin, patente);
		cout<<"Marca: ";
		getline(cin, marca);
		cout<<"Valor: $";
		cin>>valor;
		cout<<"Categoria: ";
		cin>>categoria;
		switch (categoria){
		case 1: total_pagar = (valor * cat1_porcentaje)/100 ;break;
		case 2:	total_pagar = (valor * cat2_porcentaje)/100;break;	
		case 3:	total_pagar = (valor * cat3_porcentaje)/100;break;
		case 4:	total_pagar = (valor * cat4_porcentaje)/100;break;
		}
		cont++;
	cout<<endl;
	cout<<"Vehiculo: "<<patente<<"      Valor: $"<<valor<<endl;
	cout<<"Total a Pagar: $"<<total_pagar<<endl;
	tot_recaudacion = tot_recaudacion + total_pagar;
	}
	cout<<endl;
	cout<<"Total a recaudar: $"<<tot_recaudacion;
	
	return 0;
}

