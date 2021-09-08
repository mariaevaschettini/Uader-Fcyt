
/*Una empresa que comercializa artefactos electrodomésticos posee 2 sucursales. De cada
  una de ellas se conocen los montos de ventas semestrales realizadas durante el año 2018.
  Estos datos se ingresan ordenados por sucursal y por semestre.
  Cada sucursal destinó el 20% del total de sus ventas para pagar una bonificación a sus
  empleados; monto que se repartió en partes iguales entre ellos. Se ingresan también, la
  cantidad de empleados que tenían las sucursales en el 2018.
  Determinar e informar:
		a. El total de ventas de cada sucursal.
		b. La bonificación que pagó cada sucursal a cada empleado. */

#include<iostream>
using namespace std;


int main() {
	
	float bonificacion1;// Bonificacion para empleados sucursal 1
	float bonificacion2;// Bonificacion para empleados sucursal 2
	int cantidad_empleados1;// Cantidad de empleados sucursal 1
	int cantidad_empleados2;// Cantidad de empleados sucursal 2
	float sucursal1_semestre1;// Ventas primer semestre sucursal 1
	float sucursal1_semestre2;//Ventas segundo semestre sucursal 1
	float sucursal2_semestre1;// Ventas segundo semestre sucursal 1
	float sucursal2_semestre2;//Ventas segundo semestre sucursal 2
	float total_ventas1;// total de ventas sucursal 1 
	float total_ventas2;// total de ventas sucursal 2 
	
	
	cout << "Datos de la sucursal 1" << endl;
	cout << "Ingrese el total de ventas del 1er semestre: " << endl;
	cin >> sucursal1_semestre1;
	cout << "Ingrese el total de ventas del 2do semestre: " << endl;
	cin >> sucursal1_semestre2;
	cout << "Ingrese el cantidad de empleados de la sucursal 1: " << endl;
	cin >> cantidad_empleados1;
	cout << "Datos de la sucursal 2" << endl;
	cout << "Ingrese el total de ventas del 1er semestre: " << endl;
	cin >> sucursal2_semestre1;
	cout << "Ingrese el total de ventas del 2do semestre: " << endl;
	cin >> sucursal2_semestre2;
	cout << "Ingrese el cantidad de empleados de la sucursal 2: " << endl;
	cin >> cantidad_empleados2;
	
	total_ventas1 = sucursal1_semestre1 + sucursal1_semestre2;
	total_ventas2 = sucursal2_semestre1 + sucursal2_semestre2;
	bonificacion1 = (total_ventas1*0.2) / cantidad_empleados1;
	bonificacion2 = (total_ventas2*0.2) / cantidad_empleados2;
	
	cout << "El total vendido por la sucursal 1 es de: $" << total_ventas1 << endl;
	cout << "El total vendido por la sucursal 2 es de: $" << total_ventas2 << endl;
	cout << "La bonificacion para los empleados de la sucursal 1 es de: $" << bonificacion1 << endl;
	cout << "La bonificacion para los empleados de la sucursal 2 es de: $" << bonificacion2 << endl;
	
	return 0;
}

