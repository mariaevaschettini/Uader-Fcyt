/*Dado el ingreso de un mes y un a�o, informe la cantidad de d�as que tiene dicho mes.
Obs: Ver excepci�n de octubre del a�o 1582*/


#include <iostream>

using namespace std;

int main (int argc, char * argv[]){
	
	int mes, a_ingresado;
	
	cout<<"Ingrese un mes en forma numerica(1 al 12): ";
	cin>>mes;
	cout<<"Ingrese un a�o: ";
	cin>>a_ingresado;
	
	switch(mes){
		
	case 1:
		cout<<"El mes tiene 31 dias"; break;
	case 2:
		if(a_ingresado %4 ==0){
			if(a_ingresado % 100 ==0){
				if(a_ingresado % 400 ==0){
					cout<<"El mes tiene 29 dias";
				}else{
					cout<<"El mes tiene 28 dias";
				}
			}else{
				cout<<"El mes tiene 29 dias";
				}
		}else{
			cout<<"El mes tiene 28 dias"; 
		}
		break;
	case 3:
		cout<<"El mes tiene 31 dias"; break;
	case 4:
		cout<<"El mes tiene 30 dias"; break;
	case 5:
		cout<<"El mes tiene 31 dias"; break;
	case 6:
		cout<<"El mes tiene 30 dias"; break;
	case 7:
		cout<<"El mes tiene 31 dias"; break;
	case 8:
		cout<<"El mes tiene 31 dias"; break;
	case 9:
		cout<<"El mes tiene 30 dias"; break;
	case 10:
		if(a_ingresado == 1582){
			cout<<"El mes tiene 21 dias";
		}else{
			cout<<"El mes tiene 31 dias"; 
		} 
		break;
	case 11:
		cout<<"El mes tiene 30 dias"; break;
	case 12:
		cout<<"El mes tiene 31 dias"; break;
	}
	
	
	
	return 0;
}
