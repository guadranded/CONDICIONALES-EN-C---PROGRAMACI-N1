#include <iostream>
using namespace std;
int main() {
	//solicitar al usuario que ingrese su edad
	cout << "Ingrese su edad";
	int edad;
	cin >> edad;
	
	//verificar si la edad es mayor, menor o igual a 18
	if (edad >= 18){
		cout << "Eres mayor de edad" <<endl;
	}
	else {
		cout << "Eres menor de edad" <<endl;
	}
	return 0;
}
