#include <iostream>
using namespace std;
int main(){
	//solicitar al usuario que ingrese un n�mero
	cout << "Ingrese un n�mero: ";
	int numero;
	cin >> numero;
	
	//verificar si el n�mero es positivo, negativo o cero
	if (numero > 0){
		cout << "El n�mero es positivo" <<endl;
		} 
		else if (numero < 0){
			cout << "El n�mero es negativo" <<endl;
			}
			else {
				cout << "El n�mero es cero" << endl;
			}
	return 0;
}
