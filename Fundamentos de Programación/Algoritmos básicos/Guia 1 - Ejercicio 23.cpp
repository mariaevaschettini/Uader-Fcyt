
/*Un avión realiza su recorrido partiendo del aeropuerto A, luego se dirige al B, y de allí al C
	y culmina su recorrido nuevamente en A.
	Se conocen como datos las coordenadas de los puntos A (Xa,Ya), B(Xb,Yb) y C(Xc,Yc).
	Se pide:
	a. Calcular la distancia que existe entre A y B, entre B y C y entre C y A.
	b. Calcular e informar la distancia total que debe recorrer el avión.
	La distancia se debe calcular en base a la siguiente fórmula: D2 = (X2-X1)2 + (Y2-Y1)2*/

#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float distancia_ab;// Distancia entre el punto A y B
	float distancia_bc;// Distancia entre el punto B y C
	float distancia_ca;// Distancia entre el punto C y A
	float distancia_total;// Distancia total recorrida
	int Xa;// Coordenada x del punto A
	int Xb;// Coordenada x del punto B
	int Xc;// Coordenada x del punto C
	int Ya;// Coordenada Y del punto A
	int Yb;// Coordenada x del punto B
	int Yc;// Coordenada Y del punto C


	cout << "Ingrese el coordenada Xa: " << endl;
	cin >> Xa;
	cout << "Ingrese el coordenada Ya: " << endl;
	cin >> Ya;
	cout << "Ingrese el coordenada Xb: " << endl;
	cin >> Xb;
	cout << "Ingrese el coordenada Yb: " << endl;
	cin >> Yb;
	cout << "Ingrese el coordenada Xc: " << endl;
	cin >> Xc;
	cout << "Ingrese el coordenada Yc: " << endl;
	cin >> Yc;
	distancia_ab = sqrtf(pow((Xa-Xb),2)+pow((Ya-Yb),2));
	distancia_bc = sqrtf(pow((Xb-Xc),2)+pow((Yb-Yc),2));
	distancia_ca = sqrtf(pow((Xc-Xa),2)+pow((Yc-Ya),2));
	distancia_total = distancia_ab + distancia_bc + distancia_ca;
	cout << "Distancia entre el punto a y b: " << distancia_ab << endl;
	cout << "Distancia entre el punto b y c: " << distancia_bc << endl;
	cout << "Distancia entre el punto c y a: " << distancia_ca << endl;
	cout << "La distrancia total que debe recorrer el avión es de: " << distancia_total << endl;
	
	return 0;
}

