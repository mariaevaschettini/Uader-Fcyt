
// Ingrese tres nombres; infórmelos en orden alfabético.

#include<iostream>
using namespace std;

int main() {
	
	string nombre1;
	string nombre2;
	string nombre3;
	
	cout << "Ingrese un nombre" << endl;
	getline(cin,nombre1);
	cout << "Ingrese un nombre" << endl;
	getline(cin,nombre2);
	cout << "Ingrese un nombre" << endl;
	getline(cin,nombre3);
	cout<<"-------------------------------------------------------"<<endl;
	if (nombre1<=nombre2 && nombre1<=nombre3) {
		cout << nombre1 << endl;
		if (nombre2<=nombre3) {
			cout << nombre2 << endl;
			cout << nombre3 << endl;
		} else {
			cout << nombre3 << endl;
			cout << nombre2 << endl;
		}
	} else {
		if (nombre2<=nombre1 && nombre2<=nombre3) {
			cout << nombre2 << endl;
			if (nombre1<=nombre3) {
				cout << nombre1 << endl;
				cout << nombre3 << endl;
			} else {
				cout << nombre3 << endl;
				cout << nombre1 << endl;
			}
		} else {
			cout << nombre3 << endl;
			if (nombre1<=nombre2) {
				cout << nombre1 << endl;
				cout << nombre2 << endl;
			} else {
				cout << nombre2 << endl;
				cout << nombre1 << endl;
			}
		}
	}
	return 0;
}

