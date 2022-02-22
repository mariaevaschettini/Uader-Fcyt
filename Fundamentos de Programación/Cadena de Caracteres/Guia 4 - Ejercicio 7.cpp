
/*
Dadas 3 cadenas de caracteres, ordenarlas de acuerdo a su largo.
*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	
	string cadena1, cadena2, cadena3;
	int largo_cad1, largo_cad2, largo_cad3;
	
		cout<<"Ingrese cadena 1: ";
		getline(cin, cadena1);
		cout<<"Ingrese cadena 2: ";
		getline(cin, cadena2);
		cout<<"Ingrese cadena 3: ";
		getline(cin, cadena3);
		cout<<endl;
	
		largo_cad1 = cadena1.size();
		largo_cad2 = cadena2.size();
		largo_cad3 = cadena3.size();
		
		if(largo_cad1>largo_cad2){
			if(largo_cad2>largo_cad3){
				cout<<cadena1<<endl;
				cout<<cadena2<<endl;
				cout<<cadena3<<endl;
			}else{
				cout<<cadena1<<endl;
				cout<<cadena3<<endl;
				cout<<cadena2<<endl;
			}
		}else{
			if(largo_cad1>largo_cad3){
				cout<<cadena2<<endl;
				cout<<cadena1<<endl;
				cout<<cadena3<<endl;
			}else{
				cout<<cadena2<<endl;
				cout<<cadena3<<endl;
				cout<<cadena1<<endl;
			}
		}
			
	return 0;
}

