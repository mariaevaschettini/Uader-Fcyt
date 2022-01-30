/* Dado un valor de hora, donde se ingresan por separado horas (de 0 a 23), minutos y
segundos. Informe la misma de la forma: hh:mm:ss am/pm (según corresponda).
Ejemplos:
15:45:40 ? 3:45:40 pm - 12:20:15 ? 12:20:15 pm - 0:10:55 ? 12:10:55 am*/



#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int hora, minutos, segundos, nueva_hora;
	
	cout<<"Ingrese la hora: ";
	cin>>hora;
	cout<<"Ingrese los minutos: ";
	cin>>minutos;
	cout<<"Ingrese los segundos: ";
	cin>>segundos;
	
	if (hora<=12){
		cout<<"lA HORA ES "<<hora<<":"<<minutos<<":"<<segundos<<" am.";
		}else{
			nueva_hora = hora - 12;
			cout<<"LA HORA ES "<<nueva_hora<<":"<<minutos<<":"<<segundos<<" pm.";
		}
	
	
	return 0;
}

