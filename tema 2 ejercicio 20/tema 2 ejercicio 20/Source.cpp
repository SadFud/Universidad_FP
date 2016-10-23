#include <iostream>
using namespace std;
int main() {
	int numero, veces;
	numero = 0;
	veces = 0;
	cout << "Introduce el numero de digitos que quieres comprobar" << endl;
	cin >> veces;
	for (int i = 0; i <= veces; i++) {
		cout << "introduce numero a evaluar: " << endl;
		cin >> numero;
		if (numero < 0) {
			
			cout << "no se permiten numeros menores que 0";
		}
		if (numero % 2 == 0) {
			
			cout << "par" << endl;
		}
		else {
			
			cout << "impar" << endl;
		}

	}

	system("pause");
	return 0;
}