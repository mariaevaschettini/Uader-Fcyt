/*Una empresa paga a sus operarios semanalmente, de acuerdo con la cantidad de horas
trabajadas, a razón de x pesos la hora hasta 40 hs. y un 50% más por todas las horas que
pasan de 40. Para calcular el salario a un empleado, se ingresa el total de horas trabajadas.
Informar salario a cobrar por el trabajador. El valor x se ingresa como primer dato.*/

#include <iostream>

using namespace std;

int main(int argc,char * argv[]){
	
	int precio_hora; //precio a pagar por hora
	int	tot_horas;// Cantidad de horas trabajadas
	int	base_semanal;// Total a pagar sin horas extra.
	int	horas_extra;//Cantidad de horas extra trabajadas
	int	precio_hextra; //Precio a pagar por hora extra
	int	pago_semanal;//Total a pagar
	
	cout<<"Ingrese precio por hora: ";
	cin>>precio_hora;
	cout<<"Ingrese total de horas trabajadas: ";
	cin>>tot_horas;

	
	if(tot_horas<=40){
		base_semanal = precio_hora * tot_horas;
		cout<<"El salario semanal es de : "<<base_semanal;
	}else{
		base_semanal = precio_hora * 40;
		horas_extra = tot_horas - 40;
		precio_hextra = (precio_hora * 50)/100;
		pago_semanal = base_semanal + (horas_extra * precio_hextra);
		cout<<"El salario semanal es de : "<<pago_semanal;
	}
}
