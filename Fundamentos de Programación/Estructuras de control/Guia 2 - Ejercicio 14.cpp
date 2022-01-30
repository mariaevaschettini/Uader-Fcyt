/* Determinar si un a�o ingresado por el usuario es bisiesto. Un a�o es bisiesto si es m�ltiplo de
4, a menos que sea m�ltiplo de 100. Sin embargo, si un a�o es m�ltiplo de 100 y adem�s es
m�ltiplo de 400, tambi�n resulta bisiesto*/


#include <iostream>

using namespace std;

int main (int argc, char * argv[]){
	
	int a_ingresado;
	
	cout<<"Ingrese un a�o: ";
	cin>>a_ingresado;
	
	if(a_ingresado %4 ==0){
		if(a_ingresado % 100 ==0){
			if(a_ingresado % 400 ==0){
				cout<<"El a�o es bisiesto";
			}else{
				cout<<"El a�o no es bisiesto";
			}
		}else{
			cout<<"El a�o es bisiesto";
		}
	}else{
		cout<<"El a�o no es bisiesto";
	}
	
	return 0;
}
	
	
	
