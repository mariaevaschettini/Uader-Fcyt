
/* Una remisera desea liquidar el sueldo de los choferes de una de sus unidades 
 para ello se ingresan los datos de los 2 choferes de la misma: 
 nombre y apellido, sueldo básico y km. recorridos en el mes a liquidar.
 Primero se ingresan los datos del chofer 1, y luego los datos del chofer 2. 
 Se desea generar un informe como el siguiente: 
 LIQUIDACION MENSUAL CHOFERES 
 NOMBRE DEL CHOFER 1.............................. TOTAL A COBRAR $..................
 NOMBRE DEL CHOFER 2.............................. TOTAL A COBRAR $.................. 
 TOTAL GRAL $...................... 
 Observación: Tener en cuenta que por cada km. se le paga $12,5 y que el total a cobrar se calcula como: 
 Sueldo básico + monto por kms. */


#include<iostream>
using namespace std;

int main() {
	
	float basico_chofer1; //sueldo basico del primer chofer
	float basico_chofer2; //sueldo basico del segundo chofer
	float km_recorridos1; //kilometros recorridos por el primer chofer
	float km_recorridos2; //kilometros recorridos por el segundo chofer
	string nombre_chofer1; //nombre del primer chofer
	string nombre_chofer2; //nombre del segundo chofer
	float sueldo_chofer1; //sueldo del primer chofer
	float sueldo_chofer2; //sueldo del segundo chofer
	float total_general; //total a pagar
	
	cout << "Ingrese el nombre y apellido del primer chofer: " << endl;
	getline(cin,nombre_chofer1);
	cout << "Ingrese el sueldo basico: " << endl;
	cin>>basico_chofer1;
	cout << "Ingrese los kilometros recorridos: " << endl;
	cin>>km_recorridos1;
	cout << "Ingrese el nombre y apellido del segundo chofer: " << endl;
	cin.get();
	getline(cin,nombre_chofer2);
	cout << "Ingrese el sueldo basico: " << endl;
	cin>>basico_chofer2;
	cout << "Ingrese los kilometros recorridos: " << endl;
	cin>>km_recorridos2;
	
	sueldo_chofer1 = basico_chofer1+km_recorridos1*12.5;
	sueldo_chofer2 = basico_chofer2+km_recorridos2*12.5;
	total_general = sueldo_chofer1+sueldo_chofer2;
	
	cout << "LIQUIDACION MENSUAL CHOFERES" << endl;
	cout << "NOMBRE DEL CHOFER 1: " << nombre_chofer1 << " TOTAL A COBRAR: $ " << sueldo_chofer1 << endl;
	cout << "NOMBRE DEL CHOFER 2: " << nombre_chofer2 << " TOTAL A COBRAR: $ " << sueldo_chofer2 << endl;
	cout << "TOTAL GENERAL: $" << total_general << endl;
	
	return 0;
}

