
/* En un hospital existen tres �reas: Ginecolog�a, Pediatr�a, Traumatolog�a. 
   El presupuesto anual del hospital se reparte conforme a la sig. tabla:
   - �rea: % del presupuesto: 
   -Ginecolog�a 40%
   - Traumatolog�a 30% 
   -Pediatr�a 30% 
   Obtener la cantidad de dinero que recibir� cada �rea, conociendo el monto del presupuesto. */

#include<iostream>
using namespace std;

int main() {
	float monto_ginecologia;
	float monto_pediatria;
	float monto_presupuesto;
	float monto_traumatologia;
	cout << "Ingresar monto del presupuesto" << endl;
	cin >> monto_presupuesto;
	monto_ginecologia = monto_presupuesto*0.4;
	monto_traumatologia = monto_presupuesto*0.3;
	monto_pediatria = monto_presupuesto*0.3;
	cout << "El monto a otorgar a ginecologia es de $" << monto_ginecologia << endl;
	cout << "El monto a otorgar a pediatria es de $" << monto_pediatria << endl;
	cout << "El monto a otorgar a traumatoligia es de $" << monto_traumatologia << endl;
	return 0;
}

