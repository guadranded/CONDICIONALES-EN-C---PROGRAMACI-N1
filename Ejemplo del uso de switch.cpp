#include <iostream>
using namespace std;
int main (){
	cout << "Ingrese un n�mero del 1 al 7 para representar un d�a de la semana";
	int diasemana;
	cin >> diasemana;
	// uso de la condicional swicth para que muestre el d�a seg�n el d�a elegido por el usuario
	switch (diasemana){
		case 1:
			cout << "Lunes" <<endl;
			break;
		case 2:
			cout << "Martes" <<endl;
			break;
		case 3:
			cout << "Mi�rcoles" <<endl;
			break;
		case 4:
			cout << "Jueves" <<endl;
			break;
		case 5:
			cout << "Viernes" <<endl;
			break;
		case 6:
			cout << "S�bado" <<endl;
			break;
		case 7:
			cout "Domingo" <<endl;
			break;
	}
	return 0;
}
