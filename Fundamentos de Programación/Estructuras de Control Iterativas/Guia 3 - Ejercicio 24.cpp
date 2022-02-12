
/*
Se evalúa el movimiento anual en una determinada empresa en millones de pesos. Se
ingresa por cada mes (en orden desde enero a diciembre) los montos que ingresan y
egresan. Informar:
Mes * Ingreso Egreso Saldo mensual
xxx xxx xxx xxx
_______________________________________________
Saldo Final xxx
Indicar además si el resultado del balance fue POSITIVO o NEGATIVO con un mensaje
alusivo
* Informar el nombre del mes

*/

#include <string>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

	int ingreso_mensual, egreso_mensual, cont, saldo_final, saldo_mensual;
	string mes, balance;
	
	cout<<endl;
	cout<<"                              BALANCE ANUAL"<<endl;
	cout<<endl;
	
	cont = 1;
	saldo_final = 0;
	saldo_mensual = 0;
	
	while (cont <=12){
		cout<<"-------------------------------------------------------------------"<<endl;
		switch (cont){
		case 1: 
			mes = "ENERO";
			cout<<"                                  "<<mes<<endl;break;
		case 2: 
			mes = "FEBRERO";
			cout<<"                                  "<<mes<<endl; break;
		case 3: 
			mes = "MARZO";
			cout<<"                                  "<<mes<<endl; break;
		case 4:
			mes = "ABRIL";
			cout<<"                                  "<<mes<<endl; break; 
		case 5: 
			mes = "MAYO";
			cout<<"                                  "<<mes<<endl; break;
		case 6:
			mes = "JUNIO";
			cout<<"                                  "<<mes<<endl; break;
		case 7: 
			mes = "JULIO";
			cout<<"                                  "<<mes<<endl; break;
		case 8: 
			mes = "AGOSTO";
			cout<<"                                  "<<mes<<endl; break;
		case 9: 
			mes = "SEPTIEMBRE";
			cout<<"                                  "<<mes<<endl; break;
		case 10: 
			mes = "OCTUBRE";
			cout<<"                                  "<<mes<<endl; break;
		case 11: 
			mes = "NOVIEMBRE";
			cout<<"                                  "<<mes<<endl; break;
		case 12: 
			mes = "DICIEMBRE";
			cout<<"                                  "<<mes<<endl; break;
		}
		cout<<"-------------------------------------------------------------------"<<endl;
		cout<<endl;
		cout<<"INGRESOS: ";
		cin>>ingreso_mensual;
		cout<<"EGRESOS: ";
		cin>>egreso_mensual;
		
		saldo_mensual =   ingreso_mensual - egreso_mensual;
		
		cout<<endl;
		cout<<"MES         INGRESOS         EGRESOS       SALDO MENSUAL"<<endl;
		cout<<mes<<"         $"<<ingreso_mensual<<"           $"<<egreso_mensual<<"            $"<<saldo_mensual<<endl;
		cout<<endl;
		saldo_final = saldo_final + saldo_mensual;
		cont++;
	}
	
	if (saldo_final> 0){
		balance = "POSITIVO";
	}else {
		balance = "NEGATIVO";
	}
	cout<<"-----------------------------------------------------------------------"<<endl;
	cout<<"SALDO FINAL: $"<<saldo_final<<endl;
	cout<<"BALANCE: "<<balance;
	
	return 0;
}

