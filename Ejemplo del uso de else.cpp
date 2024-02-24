#include <iostream>
using namespace std;
int main(){
	cout << "Ingrese un número: ";
	int numero;
	cin >> numero;
	//uso de la condicional else para verificar si el número es positivo, negativo o cero.
	if (numero > 0){
		cout << "El número es positivo" <<endl;
		} 
		else if (numero < 0){
			cout << "El número es negativo" <<endl;
			}
			else {
				cout << "El número es cero" << endl;
			}
	return 0;
}
