/*Se desea saber si un estudiante de primer a�o de la Facultad, vota en las pr�ximas
elecciones, para lo cual, debe ser mayor de 18 a�os. Se ingresan la fecha de nacimiento y la
fecha de votaci�n con formato d�a, mes y a�o (ddmmaa). Informe con un mensaje alusivo.*/

#include <iostream>

using namespace std;

int main (int argc, char * argv[]){
	
	//Se deben ingresar fechas de nacimiento del 2000 en adelante
	
	int fecha_nacimiento;//fecha de nacimiento formato ddmmaa 
	int	fecha_votacion; //fecha de votacion formato ddmmaa
	int	a_edad;//edad del estudiante para el a�o de la votacion
	int	MM; //mes de nacimiento
	int	DD;// dia de nacimiento
	int	AAAA;//a�o de nacimiento
	int	Aux;//calculo auxiliar, elimina el a�o de la fecha de nacimiento
	int	MMv;//mes de la votacion
	int	DDv;//dia de la votacion
	int	AAAAv; //a�o de la votacion
	int	Auxv;//calculo auxiliar, elimina el a�o de la fecha de votacion
	
	cout<<"             Datos del Estudiante          "<<endl;
	cout<<"Ingrese la fecha de nacimiento.(ddmmaa): ";
	cin>>fecha_nacimiento;
	cout<<"Ingrese la fecha de votacion. (ddmmaa): ";
	cin>>fecha_votacion;
	
	MM = fecha_nacimiento/ 10000;
	Aux = fecha_nacimiento /100; 
	DD = Aux - MM * 100;
	AAAA = (fecha_nacimiento - Aux * 100)+2000;
	
	MMv = fecha_votacion/ 10000;
	Auxv = fecha_votacion/100; 
	DDv = Auxv - MM * 100;
	AAAAv = (fecha_votacion - Auxv * 100)+2000;
	
	a_edad = AAAAv - AAAA;
	
	if(a_edad>18){
		cout<<"VOTA";
	}else{
	   if(a_edad<18){
		cout<<"NO VOTA";
		}else{
		  if(MM<MMv){
		     cout<<"NO VOTA";
			}else{
			 if(MM>MMv){
				cout<<"VOTA";
				}else{
					if(DD<DDv){
						cout<<"NO VOTA";
					}else{
						cout<<"VOTA";
					}
			    }
			}
	    }
	}
}
	
	
	

