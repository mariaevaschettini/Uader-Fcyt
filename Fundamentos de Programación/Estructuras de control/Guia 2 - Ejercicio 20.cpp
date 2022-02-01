/*

Los docentes de la c�tedra Programaci�n desean contar con un programa que ingresada
la nota de los 3 parciales rendidos por un alumno y los valores m�nimos de promedios para
promocionar y regularizar, determine la condici�n del alumno en la materia (Libre, Regular o
Promocionado).
Solo si promociona debe informar adem�s la nota correspondiente para la libreta y el
concepto para el acta de cierre.
La Nota se obtiene aplicando la sig. f�rmula:

Nota = Redondeo( (Promedio - A ) *6 / ( 100 � A ) + 4 )
A= l�mite para promoci�n
Tenga en cuenta la siguiente tabla para determinar el concepto del alumno:
Nota Concepto
4 � 5 Aprobado
6 � 7 Bueno
8 � 9 Distinguido
10 Sobresaliente
Observaciones: Las notas de los parciales y los valores m�nimos son valores entre 0 y 100.

*/



#include <cmath>
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int primer_parcial, segundo_parcial, tercer_parcial,promedio, promedio_promocion, promedio_regular, nota;
	string condicion, concepto;
	
	cout<<"Ingrese las notas de los parciales. "<<endl;
	cout<<"Primer Parcial: ";
	cin>>primer_parcial;
	cout<<"Segundo Parcial: ";
	cin>>segundo_parcial;
	cout<<"Tercer Parcial: ";
	cin>>tercer_parcial;
	
	cout<<"Ingrese el valor minimo del promedio para promocionar: ";
	cin>>promedio_promocion;
	cout<<"Ingrese el valor minimo del promedio para regularizar: ";
	cin>>promedio_regular;
	
	promedio = (primer_parcial + segundo_parcial + tercer_parcial)/3;
	
	if (promedio <promedio_regular){
		condicion = "Libre";
		cout<<"El alumno se encuentra "<<condicion<<endl;
		}else if (promedio >= promedio_regular && promedio < promedio_promocion){
			condicion = "Regularizado";
			cout<<"El alumno se encuentra "<<condicion<<endl;
		}else if(promedio >= promedio_promocion){
			condicion = "Promocionado";
			nota = (promedio - promedio_promocion) * 6/(100 - promedio_promocion) + 4;
			
			if (nota== 4 || nota== 5){
				concepto = "Aprobado";
			}else if (nota== 6 || nota==7){
				concepto = "Bueno";
			}else if(nota== 8 || nota== 9){
				concepto = "Distinguido";
			}else if(nota == 10){
				concepto = "Sobresaliente";
			}
			
			cout<<"El alumno se encuentra "<<condicion<<endl;
			cout<<"Su nota es: "<<nota<<" Su concepto es:  "<<concepto;
		}
		
	
	

	
	
	return 0;
}

