#include <iostream>
#include <cmath>
using namespace std;

const double Pi = 3.14159;
int main() {
	//volumen cilindro = altura * pi * radio^2
	//volumen cono = (altura * pi * radio^2) / 3 
	//asignacion de valores a las variables
	
	//primera parte
	
	double altura, radio, volcil, volcono;
	altura = 26.79;
	radio = 14.5;
	volcil = altura * Pi * pow(radio, 2);
	volcono = (altura * Pi * pow(radio, 2)) / 3;
	cout << "El volumen del cono es: " << volcono << endl;
	cout << "El volumen del cilindro es: " << volcil << endl;

	//segunda parte

	cout << "Introduce un valor para el radio: ";
	cin >> radio;
	cout << "Introduce un valor para la altura: ";
	cin >> altura;
	volcil = altura * Pi * pow(radio, 2);
	volcono = (altura * Pi * pow(radio, 2)) / 3;
	cout << "El volumen del cono es: " << volcono << endl;
	cout << "El volumen del cilindro es: " << volcil << endl;


	system("pause");
	return 0;
}