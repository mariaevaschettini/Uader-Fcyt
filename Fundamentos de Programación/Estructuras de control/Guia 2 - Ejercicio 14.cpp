/* Determinar si un año ingresado por el usuario es bisiesto. Un año es bisiesto si es múltiplo de
4, a menos que sea múltiplo de 100. Sin embargo, si un año es múltiplo de 100 y además es
múltiplo de 400, también resulta bisiesto*/


#include <iostream>

using namespace std;

int main (int argc, char * argv[]){
	
	int a_ingresado;
	
	cout<<"Ingrese un año: ";
	cin>>a_ingresado;
	
	if(a_ingresado %4 ==0){
		if(a_ingresado % 100 ==0){
			if(a_ingresado % 400 ==0){
				cout<<"El año es bisiesto";
			}else{
				cout<<"El año no es bisiesto";
			}
		}else{
			cout<<"El año es bisiesto";
		}
	}else{
		cout<<"El año no es bisiesto";
	}
	
	return 0;
}
	
	
	
