
/* Una línea de colectivos presta los siguientes servicios: Común, Estudiante y Trabajador. 
 Los estudiantes y los trabajadores abonan el 50 % y el 40 % del costo de un boleto común, respectivamente. 
 Se desea obtener cantidad de boletos vendidos según el servicio y total recaudado.
 Para resolver el problema se dispone de las numeraciones iniciales 
y finales de los boletos de cada uno de los servicios, 
 además se conoce al inicio el precio del boleto estudiante. */

#include<iostream>
using namespace std;


int main() {
	int final_comun; //numeracion final del boleto comun
	int final_estudiante; // numeracion final del boleto estudiante
	int final_trabajador; //numeracion final del boleto trabajador
	int inicial_comun; // numeracion inicial del boleto común
	int inicial_estudiante; //numeracion inicial del boleto estudiante
	int inicial_trabajador; //numeracion inicial del boleto trabajador
	float precio_comun; //precio del boleto comun
	float precio_estudiante; //precio del boleto estudiante
	float precio_trabajador; //precio del boleto trabajador
	int total_comun; //total de boletos comunes vendidos
	int total_estudiante; //total de boletos estudiantiles vendidos
	float total_recaudado; //total recaudado
	int total_trabajador; //total de boletos de trabajadores vendidos
	float tot_rec_comun; //total recaudado boletos comunes
	float tot_rec_estudiante; //total recaudado boletos estudiantiles
	float tot_rec_trabajador; //total recaudado boletos trabajadores
	
	cout << "Ingrese el precio del boleto estudiantil" << endl;
	cin >> precio_estudiante;
	cout << "Ingrese la numeración inicial del boleto común" << endl;
	cin >> inicial_comun;
	cout << "Ingrese la numeración final del boleto común" << endl;
	cin >> final_comun;
	cout << "Ingrese la numeración inicial del boleto estudiante" << endl;
	cin >> inicial_estudiante;
	cout << "Ingrese la numeración final del boleto estudiante" << endl;
	cin >> final_estudiante;
	cout << "Ingrese la numeración inicial del boleto trabajador" << endl;
	cin >> inicial_trabajador;
	cout << "Ingrese la numeración final del boleto trabajador" << endl;
	cin >> final_trabajador;
	total_comun = final_comun-inicial_comun;
	total_estudiante = final_estudiante-inicial_estudiante;
	total_trabajador = final_trabajador-inicial_trabajador;
	precio_comun = (precio_estudiante*100)/50;
	precio_trabajador = (precio_estudiante*100)/40;
	tot_rec_comun = total_comun*precio_comun;
	tot_rec_estudiante = total_estudiante*precio_estudiante;
	tot_rec_trabajador = total_trabajador*precio_trabajador;
	total_recaudado = tot_rec_comun+tot_rec_estudiante+tot_rec_trabajador;
	cout << "Se vendieron " << total_comun << " boletos comunes, " << total_estudiante << " boletos estudiante y " << total_trabajador << " boletos trabajador." << endl;
	cout << "El total recaudado es de $" << total_recaudado << endl;
	return 0;
}

