
/*
Se ingresan al inicio los precios unitarios de los cinco artículos que comercializa un
comercio (codificados de 1 a 5). Por cada venta que se realiza en el comercio se ingresa:
Nombre del cliente, cantidad comprada y código de artículo. Un nombre de cliente “ZZZ”
indica el fin de datos.
Informar el monto total de ventas, la venta total de cada artículo, la cantidad de ventas
realizadas y el nombre del cliente cuyo monto de venta sea el mayor.

*/
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int precio_cod1, precio_cod2, precio_cod3, precio_cod4, cant_cod1, cant_cod2, cant_cod3, cant_cod4, cant_cod5,tot_ventas, cont, aux, precio_cod5, cantidad_comprada, cod_articulo, tot_cliente; 
	string nombre_cliente, mayor_cliente;
		
	cout<<"Ingrese precio unitario articulo 1: ";
	cin>>precio_cod1;
	cout<<"Ingrese precio unitario articulo 2: ";
	cin>>precio_cod2;
	cout<<"Ingrese precio unitario articulo 3: ";
	cin>>precio_cod3;
	cout<<"Ingrese precio unitario articulo 4: ";
	cin>>precio_cod4;
	cout<<"Ingrese precio unitario articulo 5: ";
	cin>>precio_cod5;
	cout<<endl;
	cout<<"------------------------------VENTAS------------------------------";
	
	tot_cliente = 0;
	tot_ventas = 0;
	cant_cod1 = 0;
	cant_cod2 = 0;
	cant_cod3 = 0;
	cant_cod4 = 0;
	cant_cod5 = 0;
	cont = 0;
	aux = 0;
	cout<<endl;
	cout<<"NOMBRE DEL CLIENTE: ";
	cin.ignore();
	getline(cin, nombre_cliente);
	while (nombre_cliente != "zzz"){
	
	cout<<"CANTIDAD COMPRADA: ";
	cin>>cantidad_comprada;
	cout<<"CODIGO DEL ARTICULO. (1 A 5): ";
	cin>>cod_articulo;
	
		switch (cod_articulo){
	
		case 1:
			cant_cod1 = cant_cod1 + cantidad_comprada;
			tot_cliente = cantidad_comprada * precio_cod1; break;
		case 2:
			cant_cod2 = cant_cod2 + cantidad_comprada;
			tot_cliente = cantidad_comprada * precio_cod2; break;
		case 3:
			cant_cod3 = cant_cod3 + cantidad_comprada;
			tot_cliente = cantidad_comprada * precio_cod3; break;
		case 4:
			cant_cod4 = cant_cod4 + cantidad_comprada;
			tot_cliente = cantidad_comprada * precio_cod4; break;
		case 5:
			cant_cod5 = cant_cod5 + cantidad_comprada;
			tot_cliente = cantidad_comprada * precio_cod5; break;
		}
		tot_ventas = tot_ventas + tot_cliente;
		cont++;
		if (tot_cliente > aux){
			mayor_cliente = nombre_cliente;
		}
		aux = tot_cliente;
		cout<<endl;
		cout<<"NOMBRE DEL CLIENTE: ";
		cin.ignore();
		getline(cin, nombre_cliente);
	}
	cout<<endl;
	
	cout<<"TOTAL DE VENTAS: $"<<tot_ventas<<endl;
	cout<<"VENTAS POR ARTICULO"<<endl;
	cout<<"Articulo 1: "<<cant_cod1<<endl;
	cout<<"Articulo 2: "<<cant_cod2<<endl;
	cout<<"Articulo 3: "<<cant_cod3<<endl;
	cout<<"Articulo 4: "<<cant_cod4<<endl;
	cout<<"Articulo 5: "<<cant_cod5<<endl;
	cout<<"Cantidad de ventas realizadas: "<<cont<<endl;
	cout<<"Cliente con mayor monto de venta: "<<mayor_cliente;
	
	return 0;
}

