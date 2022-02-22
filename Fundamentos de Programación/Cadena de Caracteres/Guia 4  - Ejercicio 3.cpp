
/*
Dadas 3 cadenas de caracteres, informar si alguna de las tres está incluída en alguna de
las otras.
Ayuda: Ver la operación find().
*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string cadena1, cadena2, cadena3;
	int subcadena1, subcadena2, subcadena3;
	
	cout<<"Ingrese cadena 1: ";
	getline(cin, cadena1);
	cout<<"Ingrese cadena 2: ";
	getline(cin, cadena2);
	cout<<"Ingrese cadena 3: ";
	getline(cin, cadena3);
	
	subcadena1 = cadena1.find(cadena2);
	subcadena2 = cadena2.find(cadena3);
	subcadena3 = cadena1.find(cadena3);
	
	cout<<subcadena1<<endl;
	cout<<subcadena2<<endl;
	cout<<subcadena3<<endl;
	
	if (subcadena1>=0){
		cout<<"La cadena 2 se encuentra en la cadena 1"<<endl;
	}else if(subcadena2>=0){
		cout<<"La cadena 3 se encuentra en la cadena 2"<<endl;
	}else if(subcadena3>=0){
		cout<<"La cadena 3 se encuentra en la cadena 1"<<endl;
	}else{
		cout<<"Las tres cadenas son distintas"<<endl;;
	}
	
	return 0;
}

