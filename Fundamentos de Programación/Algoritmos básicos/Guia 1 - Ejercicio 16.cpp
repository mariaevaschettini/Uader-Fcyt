
/*Una persona ha efectuado una compra en un negocio. 
 Al momento de pagar, le comunican que cuenta con un 20% de descuento. 
 Determinar el total a pagar, conociendo el monto sin descuento. Informar según el siguiente detalle: 
 TOTAL COMPRA: $XXXXX 
 DESCUENTO: $XXX 
 TOTAL A PAGAR: $XXX*/

#include<iostream>
using namespace std;


int main() {
	float descuento; 
	float totalcompra;
	float totalpagar;
	cout << "Ingrese el total de compra" << endl;
	cin >> totalcompra;
	descuento = (totalcompra*20/100);
	totalpagar = totalcompra-descuento;
	cout << "El total a pagar es de " << totalpagar << endl;
	return 0;
}

