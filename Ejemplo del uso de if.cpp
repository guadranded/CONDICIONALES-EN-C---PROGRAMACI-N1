#include <iostream>
using namespace std;
int main() {
	cout << "Ingrese su edad";
	int edad;
	cin >> edad;
	// uso de la condicional if para verificar si la edad del usuario es mayor,menor o igual a 18
	if (edad >= 18){
		cout << "Eres mayor de edad" <<endl;
	}
	else {
		cout << "Eres menor de edad" <<endl;
	}
	return 0;
}
