/* Se desea obtener la cuota a pagar por un crédito solicitado. Se ingresa la información de:
Capital solicitado, Razón (tasa anual), plazo (en meses).
El cálculo de interés simple se realiza con la fórmula: (Capital x razón x tiempo) / (100 x 12).
El monto que se obtenga (capital + interés) dividido el plazo da como resultado el valor de la
cuota. */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	float Cap; // monto del capital
	float Ra; //tasa anual
	float Pla; //plazo
	float Int; //interes simple
	float Cta; //cuota
	cout<<"Ingresar el monto del capital ";
	cin>>Cap;
	cout<<"Ingresar la tasa anual ";
	cin>>Ra;
	cout<<"Ingresar la cantidad de meses ";
	cin>>Pla;
	Int = (Cap * Ra * Pla)/(100 * 12);
	Cta = (Cap + Int)/Pla;
	cout<<"su cuota es de "<<Cta<<endl;
	return 0;
}

