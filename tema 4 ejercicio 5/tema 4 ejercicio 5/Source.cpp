#include <iostream>
#include <cmath>
using namespace std;
int suma_cubos(int dato);
int main() {
	for (int i = 100; i < 1000; i++) {
		if (suma_cubos(i) == i) {
			cout << i << endl;
		}
	}
	system("pause");
	return 0;
}

int suma_cubos(int dato) {
	int suma = 0;
	do {
		suma = suma + pow(dato % 10, 3);
		dato = dato / 10;
	} while (dato > 0);

	return suma;
}