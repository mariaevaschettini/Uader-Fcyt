/*
El colegio de médicos ha organizado un curso y desea saber cuántas mujeres y cuántos
varones asistieron al mismo.
Para ello, se ingresa por cada participante: Nombre y apellido, edad y sexo (‘F’ ‘M’). El ingreso
de datos finaliza cuando se ingresa un nombre y apellido igual a ‘XXX’.
Calcular e informar:
• Cantidad de mujeres y de varones que asistieron al curso.
• Cantidad de mujeres mayores de 25 años que asistieron.
• Cantidad de hombres menores de 40 años que asistieron.
• Cantidad total de participantes.
*/

#include <string>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int cont, cantidad_mujeres, cantidad_hombres, mujeres_mayores, hombres_menores, edad;
	string nombre;
	char sexo;
	
	cout<<"-------------------------COLEGIO DE MEDICOS----------------------"<<endl;
	cout<<"Asistencia Curso"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Participante"<<endl;
	cout<<"Ingrese Nombre y Apellido: ";
	cin.ignore();
	getline(cin, nombre);
	cont = 1;
	cantidad_mujeres = 0;
	cantidad_hombres = 0;
	mujeres_mayores = 0;
	hombres_menores = 0;
	
	while (nombre != "XXX"){
		
		cout<<"Ingrese la edad: ";
		cin>>edad;
		cout<<"Ingrese el sexo. (F o M): ";
		cin>>sexo;
		cont++;
	
		if (sexo == 'F'){
			cantidad_mujeres ++;
			if(edad >= 25){
				mujeres_mayores++;
			}
			}else{
				cantidad_hombres++;
				if(edad < 40){
					hombres_menores++;
				}
			}
		cout<<endl;
		cout<<"Participante"<<endl;
		cout<<"Ingrese Nombre y Apellido: ";
		cin.ignore();
		getline(cin, nombre);
	}
	
	cout<<"Asistieron al curso: "<<endl;
    cout<<cantidad_mujeres<<" mujeres y "<<cantidad_hombres<<" varones"<<endl;
	cout<<mujeres_mayores<<" mujeres mayores de 25 años."<<endl;
	cout<<hombres_menores<<" hombres menores de 40 años."<<endl;
	cout<<cont<<" personas."<<endl;
	
	return 0;
}

