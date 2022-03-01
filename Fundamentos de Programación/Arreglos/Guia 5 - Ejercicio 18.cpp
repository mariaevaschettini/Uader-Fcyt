
/*
Realice una aplicación que genere una matriz identidad cuya dimensión sea de NxN. La
matriz identidad es una matriz cuadrada que tiene 1 en la diagonal principal y 0 en el resto de
las celdas.
Informar la matriz visualizándola en forma correcta en la pantalla.
*/
#include <iomanip>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
		
	int matriz[100][100], filas, columnas;
	cout<<"Ingrese la cantidad de filas de la matriz: ";
	cin>>filas;
	cout<<"Ingrese la cantidad de columnas de la matriz: ";
	cin>>columnas;
	
	
	for(int i=1;i<filas;i++){
		for(int j=1;j<columnas;j++){
		  matriz[i][j]= 0;
		  if(i==j){
			  matriz[i][j]=1;
		  }
		  cout<<setw(3)<<matriz[i][j];
		}
		cout<<endl;
	}
		
		
	return 0;
}

