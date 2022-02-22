
/*

Dadas 3 cadenas de caracteres, ordenarlas de acuerdo a su orden alfabético.

*/
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	string cadena1, cadena2, cadena3;
	
	cout<<"Ingrese una cadena de caracteres: ";
	getline(cin, cadena1);
	cout<<"Ingrese una cadena de caracteres: ";
	getline(cin, cadena2);
	cout<<"Ingrese una cadena de caracteres: ";
	getline(cin, cadena3);
	
	if(cadena1<cadena2){
		if(cadena2<cadena3){
			cout<<cadena1<<endl;
			cout<<cadena2<<endl;
			cout<<cadena3<<endl;
		}else{
			cout<<cadena1<<endl;
			cout<<cadena1<<endl;
			cout<<cadena1<<endl;
		}
	}else{
		cout<<cadena2<<endl;
		if(cadena1<cadena3){
			cout<<cadena1<<endl;
			cout<<cadena3<<endl;
		}else{
			cout<<cadena3<<endl;
			cout<<cadena1<<endl;
		}
	}
	
	return 0;
}

