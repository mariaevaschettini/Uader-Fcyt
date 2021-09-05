
/*¿Cuánto dinero hay en una Caja de Seguridad? Para ello se ingresa la cantidad 
de billetes que hay de $10, $20, $50, $100, $500 y $1000 respectivamente. 
Informar el total existente. */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	
	int Bdiez; //billetes de diez
	int	Bveinte; //billetes de veinte
	int	Bcincu; //billetes de cincuenta
	int	Bcien; //billetes de cien
	int	Bquin; //billetes de quinientos
	int	Bmil; //billetes de mil
	int	Tot; //total
	cout<<"Ingrese cantidad de billetes de diez ";
	cin>>Bdiez;
	cout<<"Ingrese cantidad de billetes de veinte ";
	cin>>Bveinte;
	cout<<"Ingrese cantidad de billetes de cincuenta ";
	cin>>Bcincu;
	cout<<"Ingrese cantidad de billetes de cien ";
	cin>>Bcien;
	cout<<"Ingrese cantidad de billetes de quinientos ";
	cin>>Bquin;
	cout<<"Ingrese cantidad de billetes de mil ";
	cin>>Bmil;
	Tot = Bdiez * 10 + Bveinte * 20 + Bcincu * 50 + Bcien * 100 + Bquin * 500 + Bmil * 1000;
	cout<<"El total de dinero disponible en la caja de seguridad es de "<<Tot<<endl;
	
	return 0;
}

