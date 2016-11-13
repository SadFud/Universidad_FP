#include <iostream>
using namespace std;
int solicitarDato();
int descomponer(int dato);
int main() {
	//int dato = solicitarDato();
	int descompuesto = descomponer(solicitarDato());
	cout << descompuesto << endl;
	system("pause");
	return 0;
}

int solicitarDato() {
	int dato = 0;
	do {
		cout << "introduce numero mayor que 0: ";
		cin >> dato;
	} while (dato <= 0);
	return dato;
}

int descomponer(int dato) {
	int suma = 0;
	while (dato > 0) {
		suma = suma + dato % 10;
		dato = dato / 10;
	}
	return suma;
}