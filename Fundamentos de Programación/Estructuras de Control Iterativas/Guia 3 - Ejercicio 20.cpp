/*

La barra brava de un club decide realizar un control estadístico de la cantidad de veces
que han estado detenidos sus integrantes. Para ello se ingresa por cada integrantre su apodo
y la cantidad de veces que estuvo detenido.
Informar de acuerdo al siguiente informe:
Cantidad de Detenciones Cantidad de integrantes
1 XXXX
2 – 4 XXXX
5 – 10 XXXX
más de 10 XXXX
Cantidad de integrantes encuestados: XXXX
Desean conocer además el apodo del integrante que más detenciones ostenta.
El final de datos se determina con apodo igual a “ZZZ”.
Nota: Todos los integrantes han sido detenidos por lo menos una vez.

*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string apodo, mayor_apodo;
	int cont_encuestados, cont1, cont2, cont3, cont4, aux, cant_detenciones;
	
	cout<<"Ingrese el apodo del integrante: ";
	getline (cin, apodo);
	cont_encuestados = 1;
	cont1 = 0;
	cont2 = 0;
	cont3 = 0;
	cont4 = 0;
	aux = 0;
	while(apodo != "zzz"){
	cout<<"Ingrese la cantidad de detenciones que presenta: ";
	cin>>cant_detenciones;
	
		if (cant_detenciones == 1){
			cont1++;
		}else if(cant_detenciones >=  2 && cant_detenciones <= 4){
			cont2++;
		}else if (cant_detenciones >=  5 && cant_detenciones <= 10){
			cont3++;
		}else if (cant_detenciones > 10){
			cont4++;
		}
		if (cant_detenciones > aux){
			mayor_apodo = apodo;
		}
		aux = cant_detenciones;
		
	cout<<"Ingrese el apodo del integrante: ";
	cin.ignore();
	getline (cin, apodo);
		if (apodo != "zzz"){
			cont_encuestados++;
		}
	}
	cout<<endl;
	cout<<"Cantidad de detenciones             Cantidad de Integrantes"<<endl;
	cout<<"1                               "<<cont1<<endl;
	cout<<"2 - 4                           "<<cont2<<endl;
	cout<<"5 - 10                          "<<cont3<<endl;
	cout<<"mas de 10                       "<<cont4<<endl;
	cout<<"Cantidad de integrantes encuestados: "<<cont_encuestados<<endl;
	cout<<"El integrante que mayor detenciones osenta es: "<<mayor_apodo<<endl;
	
	return 0;
}

