/*
En un triatlón participaron N competidores y por cada uno de ellos se tienen: el número de
competidor y los 3 pares de datos con la siguientes información:
• Código de Deporte (1= natación, 2=carrera, 3=bicicleta)
• Tiempo que hizo en ese deporte (en minutos)
Los pares de datos no vienen ordenados por código de deporte. Se desea obtener:
• Por cada competidor: tiempo total.
• El tiempo total del ganador.
• La hora (en horas y minutos) en que dio por terminada la competencia (momento en que
llegó el último), sabiendo que la largada fue a las 17:00 hs.
• El tiempo promedio utilizado por los competidores en cada deporte.
La cantidad de competidores N se ingresa como primer dato.
Nota: Todos los competidores completaron las 3 pruebas.
*/


#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int cant_competidores; // cantidad de competidores
	int	cont_competidores; // contador de competidores para el ingreso de datos
    int	tot_tiempo;// total de tiempo realizado por competidor
	int	numero_competidor;// numero de competidor
	int	cont; // contador de tipo de deporte
	int menor_tiempo;//menor tiempo total
	float	mayor_tiempo;// mayor tiempo total(ultimo en llegar)
	float	hora_final;// hora de finalizacion de competencia 
	float	promedio_natacion;// promedio de tiempo de todos los competidores en natacion
	float	promedio_carrera;// promedio de tiempo de todos los competidores en carrera
	float	promedio_bicicleta;//promedio de tiempo de todos los competidores en bicicleta
	int	cod_deporte;// codigo de deporte
	int	tiempo_competidor;//tiempo realizado por competidor en un deporte
	int	tiempo_natacion;// suma de tiempo utilizado por los competidores en natacion
	int tiempo_carrera;//suma de tiempo utilizado por los competidores en carrera
	int tiempo_bicicleta;//suma de tiempo utilizado por los competidores en bicicleta
	int ganador;// codigo de competidor ganador
	
	cout<<"-----------------------------TRIATLON-----------------------------"<<endl;
	cout<<endl;
	cout<<"Ingrese la cantidad de competidores: ";
	cin>>cant_competidores;
	
	cont_competidores = 1;
	menor_tiempo = 0;
	mayor_tiempo = 0;
	tiempo_natacion = 0;
	tiempo_carrera = 0;
	tiempo_bicicleta = 0;
	
	while (cont_competidores <= cant_competidores){
		cout<<endl;
		cout<<"NUMERO DE COMPETIDOR: ";
		cin>>numero_competidor;
		
		cont = 0;
		tot_tiempo = 0;
		
			while (cont < 3){
			cout<<endl;
			cout<<"CODIGO DE DEPORTE. (1= natación, 2=carrera, 3=bicicleta): ";
			cin>>cod_deporte;
			cout<<"Tiempo realizado. (Expresar en minutos): ";
			cin>>tiempo_competidor;
			
			switch (cod_deporte){
				case 1:  tiempo_natacion = tiempo_natacion + tiempo_competidor;break;
				case 2:  tiempo_carrera = tiempo_carrera + tiempo_competidor;break;
				case 3:  tiempo_bicicleta = tiempo_bicicleta + tiempo_competidor;break;	
			}
			tot_tiempo = tot_tiempo + tiempo_competidor;
			cont++;
			}
		
		if (tot_tiempo < menor_tiempo || menor_tiempo == 0){
			menor_tiempo = tot_tiempo;
			ganador = numero_competidor;
		}else if (tot_tiempo > mayor_tiempo|| mayor_tiempo == 0 ){
			mayor_tiempo = tot_tiempo;
		}

	cout<<endl;
	cout<<"Competidor: "<<numero_competidor<<"    Tiempo Total: "<<tot_tiempo<<" minutos"<<endl;
	cont_competidores++; 
	
	}
	
	hora_final = 17 + (mayor_tiempo / 60 );
	promedio_natacion = tiempo_natacion / cant_competidores;
	promedio_carrera = tiempo_carrera / cant_competidores;
	promedio_bicicleta = tiempo_bicicleta / cant_competidores;
	cout<<endl;
	cout<<"Ganador: "<<ganador<<"    Tiempo: "<<menor_tiempo<<endl;
	cout<<"Hora de Finalizacion: "<<hora_final<<endl;
	cout<<"Promedio de Tiempos"<<endl;
	cout<<"Natacion: "<<promedio_natacion<<endl;
	cout<<"Carrera: "<<promedio_carrera<<endl;
	cout<<"Bicicleta: "<<promedio_bicicleta<<endl;
	
	return 0;
}

