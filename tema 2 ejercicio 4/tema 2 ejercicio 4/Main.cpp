#include <iostream>

using namespace std;


/*
Escribe un programa que lea del teclado un número (real) de grados Fahrenheit y lo convierta
a Celsius mostrando el resultado en la pantalla.
ºC = 5 / 9 x (ºF - 32)
*/

int main() {

	double a, b, c, grados, far;
	a = 5;
	b = 9;
	c = 32;
	cout << "Introduce el numero de grados Fahrenheit a convertir: ";
	cin >> far;
	grados = a / b * (far - c);
	cout << "El equivalente de " << far << " grados Fahrenheit en grados celsius es: " << grados << endl;
	system("pause");

	return 0;
}