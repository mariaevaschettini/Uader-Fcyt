
/*Se desea contar con una aplicación que dado los valores de radio y altura calcule el
volumen de un cilindro.*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	
	float R;//radio
	float H;//altura
	float V;//volumen
	cout<<"Introduca el radio del cilindro "<<endl;
	cin>>R;
	cout<<"Introduzcca la altura del cilindro "<<endl;
	cin>>H;
	V  = R * H;
	cout<<"El volumnen del cilindro es "<<V<<endl;
	
	return 0;
}

