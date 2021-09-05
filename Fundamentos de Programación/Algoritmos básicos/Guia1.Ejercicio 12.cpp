
/*Se desea contar con una aplicación que ingresando el sueldo neto de una 
persona calcule su aporte jubilatorio (16% del sueldo neto) y el sueldo líquido 
(sueldo neto – aporte jubilatorio).*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	
	int SN; //sueldo neto 
	int	AJ; //aporte jubilatorio
	int	SL; //sueldo liquido
	cout<<"Ingrese su sueldo neto ";
	cin>>SN;
	AJ = SN * 16/100;
	SL = SN - AJ;
	cout<<"Su aporte jubilatorio es de $"<<AJ<<endl;
	cout<<"Su sueldo liquido es de $"<<SL;
	
	return 0;
}

