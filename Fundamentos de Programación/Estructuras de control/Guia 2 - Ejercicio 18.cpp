/*

18. Un club cobra una cuota mensual a sus socios, a quienes divide en Activo, Familiar y
Cadete.
El socio activo paga el valor base, el familiar un 50 % mas y el cadete paga un 20% menos.
Se ingresa como primer dato el valor base de la cuota.
Ademas se ingresa el nombre del club y los datos de un socio: número de socio, nombre y
apellido y tipo (activo, familiar, cadete).
Informar lo que debe pagar el socio ingresado, con el siguiente formato:
CLUB:................................
NRO. DE SOCIO:.......................... NOMBRE DEL SOCIO:...................................
TIPO DE SOCIO:........................... TOTAL APAGAR: $.....................

*/



#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string nombre_club, nombre_socio,tipo_socio;
    int num_socio,total, basico, monto_tipo;
    
   cout<<"Ingrese el valor base de la cuota: ";
   cin>>basico;
   cout<<"Ingrese el nombre del club: ";
   cin.ignore();
   getline(cin,nombre_club);
   cout<<"-------------DATOS DEL SOCIO------------";
   cout<<endl;
   cout<<"Ingrese el numero de socio: ";
   cin>>num_socio;
   cout<<"Ingrese el nombre del socio: ";
   cin.ignore();
   getline(cin,nombre_socio);
   cout<<"Ingrese tipo de socio: ";
   cin>>tipo_socio;
   
 
   if (tipo_socio=="activo"){
       monto_tipo = basico;
       total = monto_tipo;
   }else if (tipo_socio=="familiar"){
       monto_tipo = (basico * 50)/100;
       total = basico + monto_tipo;
   }else if (tipo_socio=="cadete"){
       monto_tipo = (basico * 20)/100;
       total = basico - monto_tipo;
   }
   
   cout<<endl;
   cout<<"CLUB: "<<nombre_club<<endl; 
   cout<<"NRO. SOCIO: "<<num_socio<<"     NOMBRE DEL SOCIO: "<<nombre_socio<<endl;
   cout<<"TIPO DE SOCIO: "<<tipo_socio<<"     TOTAL A  PAGAR: $"<<total<<endl; 
   
   
   return 0;
}
