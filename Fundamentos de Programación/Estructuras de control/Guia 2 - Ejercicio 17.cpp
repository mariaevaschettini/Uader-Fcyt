/*
Una empresa desea calcular el sueldo de un empleado sabiendo que el sueldo basico 
depende de la categoria. Ademas, se le paga un adicional por antiguedad. 
La determinacion del basico se realiza segun el siguiente detalle:

Categoria Sueldo Basico
1 $ 25000 
2 $ 20000
3 $ 15000
4 $ 12000

La antiguedad se calcula en base a la siguiente tabla:
Antiguedad Porcentaje 
 0-10 aÒos 20%
11-15 aÒos 50%
16-20 aÒos 80 %
 mas de 20 aÒos 100%

Para ello se ingresan los datos de un empleado en el siguiente orden: Apellido y nombre, 
categoria (1 a 4) y antiguedad. 
Informar con el siguiente formato:

APELLIDO Y NOMBRE: ..........................................
CATEGORIA:..................  SUELDO BAÅSICO: $ .................
ANTIGUEDAD: ........ A—OS     MONTO ANTIGUEDAD: $................ 
SUELDO TOTAL: $ ................................

*/



#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string nombre;
    int categoria, antiguedad, m_antiguedad, sueldo, basico;
    
   cout<<"Ingrese Apellido y Nombre del empleado: ";
   getline(cin,nombre);
   cin.ignore();
   cout<<"Ingrese categoria del empleado: ";
   cin>>categoria;
   cout<<"Ingrese antiguedad del empreado: ";
   cin>>antiguedad;
   
   switch(categoria){
       
       case 1:
       basico = 25000; break;
       case 2:
       basico = 20000; break;
       case 3:
       basico = 15000; break;
       case 4:
       basico = 12000; break;
       
   }
   
   if (antiguedad<=10){
       m_antiguedad = (basico * 20)/100;
   }else if (antiguedad>10&&antiguedad<=15){
       m_antiguedad = (basico * 50)/100;
   }else if (antiguedad>15&&antiguedad<=20){
       m_antiguedad = (basico * 80)/100;
   }else if(antiguedad>20){
       m_antiguedad = basico;
   }
   
   sueldo = basico + m_antiguedad;
   
   cout<<endl;
   cout<<"APELLIDO Y NOMBRE: "<<nombre<<endl; 
   cout<<"CATEGORIA: "<<categoria<<"     SUELDO BASICO: $"<<basico<<endl;
   cout<<"ANTIGUEDAD: "<<antiguedad<<" A—OS.     MONTO ANTIGUEDAD: $"<<m_antiguedad<<endl; 
   cout<<"SUELDO TOTAL: $"<<sueldo<<endl;
   
   
   return 0;
   
}


