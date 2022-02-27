/*Una cooperadora desea obtener la nómina de personas que han adquirido un bono
contribución, numerados del 1 al 100. Para ello se ingresan los nombres de cada una de las
100 personas que compraron dicho bono. Se quiere mostrar al finalizar la carga, un
listado con el siguiente formato;
NRO BONO PERSONAS QUE ADQUIRIERON EL BONO
1            XXXXXXXXXXXXXXXXX
2            XXXXXXXXXXXXXXXXX
*/

#include <iostream>
#include <string>

using namespace std;

int main (int argc, char *argv[]){
	
	
	string nomina[100], numero_bono[100];
	
	for(int indice = 1; indice<=3;indice++){
		cout<<"Ingrese un nombre: ";
		getline(cin, nomina[indice]);
	}
	
	cout<<endl;
	cout<<"NRO BONO               PERSONAS QUE ADQUIRIERON EL BONO"<<endl;
	
	for (int i=1;i<=3;i++){
		cout<<i<<"                          "<<nomina[i]<<endl;
	}
	
	
	return 0;
}
