/*

Una distribuidora de zapatos vende distintos modelos de zapatos los cuales se pueden
pagar de la siguiente forma: 1: contado, 2: 6 cuotas, 3: 12 cuotas.
Si el pago es al contado se hace un 5% de descuento sobre el total.
Si el pago es en 12 cuotas se hace un recargo del 10% sobre el total y si es en 6 cuotas no se
hace ningún descuento o recargo.
Se ingresa para ello, el nombre del cliente, el precio de lista del zapato, la cantidad y la forma
de pago (1, 2, 3). El nombre de la distribuidora es el primer dato a ingresar.
Se pide Informar lo siguiente:
• El Nombre de la distribuidora y el Nombre del cliente.
• La cantidad de zapatos vendidos y el precio de lista.
• El texto correspondiente a la forma de pago elegida.
• El recargo o Descuento si correspondiera.
• Si el pago es en cuotas el monto de la cuota.
• El total a pagar

*/
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	string nombre_distribuidora, nombre_cliente;
	int precio_zapato, cantidad_pares, forma_pago, monto_total, aux, total_pagar;
	
	cout<<"-------------------------DISTRIBUIDORA DE ZAPATOS-----------------";
	cout<<endl;
	cout<<"Ingrese el nombre de la distribuidora: ";
	getline(cin,nombre_distribuidora);
	cout<<endl;
	cout<<"DATOS DEL CLIENTE";
	cout<<endl;
	cout<<"Nombre y Apellido: ";
	getline(cin, nombre_cliente);
	cout<<"Ingrese el precio de lista del zapato: $";
	cin>>precio_zapato;
	cout<<"Ingrese cantidad de pares: ";
	cin>>cantidad_pares;
	cout<<"Ingrese la forma de pago."<<endl;
	cout<<"1. Contado"<<endl;
	cout<<"2. 6 Cuotas"<<endl;
	cout<<"3. 12 Cuotas"<<endl;
	cout<<"Ingrese opcion 1, 2 o 3: ";
	cin>>forma_pago;
	cout<<endl;
	
	cin.ignore();
	cout<<"DISTRIBUIDORA: "<<nombre_distribuidora<<endl;
	cout<<"CLIENTE: "<<nombre_cliente<<endl;
	cout<<"CANTIDAD DE PARES: "<<cantidad_pares<<endl;
	cout<<"PRECIO DE LISTA: $"<<precio_zapato<<endl;
	
	aux = 0;
	monto_total = 0;
	total_pagar = 0;
	
	switch (forma_pago){
		
	case 1:
		
		cout<<"FORMA DE PAGO: CONTADO."<<endl;	
		
		monto_total = precio_zapato * cantidad_pares;
		aux =  (monto_total * 5) / 100;
		total_pagar = monto_total - aux;

		cout<<"DESCUENTO: $"<<aux<<endl;
		cout<<"TOTAL A PAGAR: $"<<total_pagar; break;
			
	case 2:
		
		cout<<"FORMA DE PAGO: 6 Cuotas."<<endl;	
		
		monto_total = precio_zapato * cantidad_pares;
		total_pagar = monto_total; 
		
		cout<<"TOTAL A PAGAR: $"<<total_pagar; break;
	case 3:
		
		cout<<"FORMA DE PAGO: 12 Cuotas."<<endl;	
		
		monto_total = precio_zapato * cantidad_pares;
		aux =  (monto_total * 10) / 100;
		total_pagar = monto_total + aux;
		
		cout<<"DESCUENTO: $"<<aux<<endl;
		cout<<"TOTAL A PAGAR: $"<<total_pagar; break;
	}
	
	
	return 0;
}

