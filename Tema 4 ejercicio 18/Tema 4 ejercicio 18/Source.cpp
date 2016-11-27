#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
int cuadrado(int base, int exponente); //funcion para calcualr el cuadrado
int main() {
	ifstream F1;
	ofstream F2;
	F1.open("input.txt");
	F2.open("output.txt");
	int numero = 0;
	if (F1.is_open() && F2.is_open()) {
		do {
			F1 >> numero;
			F2 << cuadrado(numero, 2) << " " << cuadrado(numero, 2) - 1 << " " << cuadrado(numero, 2) + 1 << endl;
		} while (!F1.eof());
	}
	else {
		cout << "Error al abrir los archivos" << endl;
	}
	F1.close();
	F2.close();
	system("pause");
	return 0;
}

int cuadrado(int base, int exponente) {
	return pow(base, exponente);
}