/*

Ingrese una cadena que contenga la palabra “pero”. Reemplace dicha palabra por “sin
embargo”.

*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
		string cadena, subcadena2;
		int subcadena1;
		
		cout<<"Ingrese una cadena que contenga la palabra -pero- : ";
		getline(cin, cadena);
		
		subcadena1 = cadena.find("pero");
		
		subcadena2 = cadena.replace(subcadena1, 4, " sin embargo ");
		
		cout<<subcadena2<<endl;
		
	return 0;
}

