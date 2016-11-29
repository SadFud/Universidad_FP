#include <iostream>
using namespace std;
int suma_digitos(int dato);
int main() {
	int suma = 0;
	int numero = 39;
		suma = suma_digitos(numero);
		if (suma > 10) {
			cout << suma_digitos(suma);
		}
	system("pause");
	return 0;
}
int suma_digitos(int dato) {
	int suma = 0;
	do {
		suma = suma + dato % 10;
		dato = dato / 10;
	} while (dato > 0);
	return suma;
}
