#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
	//instrucciones
	cout << "Uso: Introducir cantidad seguido de letra tal que " << endl;
	cout << "P = pulgadas | m = millas | f = Grados Fahrenheit | g = galones liquidos | o = onzas | l = libras" << endl;
	cout << "Ejemplo de uso:" << endl;
	cout << "10" << endl;
	cout << "g" << endl;
	system("pause");
	system("cls");
	//declaracion de variables
	double cantidad, conversion;
	string unidad, unidad2;
	//peticion de datos
	cout << "Introduce la cantidad a convertir: ";
	cin >> cantidad;
	cout << "introduce la unidad: ";
	cin >> unidad;
	//secuencia de identificacion y conversion	
	if (unidad == "p"){
		conversion = cantidad * 2.54;
		cout << std::setprecision(4) << conversion << " cm" << endl;
	}
	else if (unidad == "m") {
		conversion = cantidad * 1609.34;
		cout << std::setprecision(4) << conversion << " m" << endl;
	}
	else if (unidad == "f") {
		conversion = cantidad * 33.8;
		cout << std::setprecision(4) << conversion << " c" << endl;
	}
	else if (unidad == "g") {
		conversion = cantidad * 0.264172;
		cout << std::setprecision(4) << conversion << " l" << endl;
	}
	else if (unidad == "o") {
		conversion = cantidad * 28.3495;
		cout << std::setprecision(4) << conversion << " gr" << endl;
	}
	else if (unidad == "l") {
		conversion = cantidad * 0.453592000004704;
		cout << std::setprecision(10) << conversion << " kg" << endl;
	}
	else if (unidad != "p" || unidad != "m" || unidad != "f" || unidad != "g" || unidad != "o" || unidad != "l") {
		cout << "La unidad seleccionada no es valida." << endl;
	}
	system("pause>nul");
	return 0;
}