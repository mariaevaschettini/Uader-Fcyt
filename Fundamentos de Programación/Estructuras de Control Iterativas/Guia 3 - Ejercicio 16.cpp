
/*

Un jardín de infantes tiene N alumnos y desea hacer un control de los mismos. Por cada
alumno se ingresa Nombre y Apellido, Peso y Altura. Informar cuál es el alumno más alto y
cuál es el de menor peso. El Valor N se ingresa como primer dato.

*/
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	float peso_alumno, altura_alumno, menor_peso, mayor_altura;
	string nombre_alumno;
	int cantidad_alumnos, cont;
	
	cout<<"---------------------------Control de Alumnos-------------------"<<endl;
    cout<<"Ingrese la cantidad de alumnos: ";
	cin>>cantidad_alumnos;
	cout<<endl;
	cout<<"Ingrese nombre y Apellido: ";
	cin.ignore();
	getline (cin, nombre_alumno);
	cout<<"Ingrese el peso del alumno: ";
	cin>>peso_alumno; 
	cout<<"Ingrese la altura del alumno: ";
	cin>>altura_alumno;
	cont = 1;
	menor_peso = peso_alumno; 
	mayor_altura = altura_alumno;
	
	while (cont < cantidad_alumnos){
		
		cout<<endl;
		cout<<"Ingrese nombre y Apellido: ";
		cin.ignore();
		getline (cin, nombre_alumno);
		cout<<"Ingrese el peso del alumno: ";
		cin>>peso_alumno; 
		cout<<"Ingrese la altura del alumno: ";
		cin>>altura_alumno;
		cont++;
		
		if (menor_peso > peso_alumno){
			menor_peso = peso_alumno;
			
		}else if(mayor_altura < altura_alumno) {
			mayor_altura = altura_alumno;
		}
		
	}
	cout<<endl;
	cout<<"El alumno con menor peso es: "<<menor_peso<<endl;
	cout<<"El alumno con mayor altura es: "<<mayor_altura<<endl;
	
	return 0;
}

