
/* Una alumno ha rendido 2 exámenes parciales y ha presentado un trabajo práctico. 
   Según las calificaciones obtenidas, se determina la calificación del alumno: 
   El promedio de los parciales constituye el 80% de la calificación final, 
   el 20% restante es la correspondiente al trabajo práctico. 
   Tanto los parciales como el trabajo práctico son calificados entre 0 y 100. 
   Se ingresan las 3 notas obtenidas. Informar la nota final. */

#include<iostream>
using namespace std;


int main() {
	float nota_final;
	float parcial1;
	float parcial2;
	float promedio_parciales;
	float trabajo_practico;
	cout << "Ingrese nota del primer parcial" << endl;
	cin >> parcial1;
	cout << "Ingrese nota del segundo parcial" << endl;
	cin >> parcial2;
	cout << "Ingrese nota del trabajo practico" << endl;
	cin >> trabajo_practico;
	promedio_parciales = (parcial1+parcial2)/2;
	nota_final = promedio_parciales*0.8+trabajo_practico*0.2;
	cout << "La nota final es de " << nota_final << endl;
	return 0;
}

