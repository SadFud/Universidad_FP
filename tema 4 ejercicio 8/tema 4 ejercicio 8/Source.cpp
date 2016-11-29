#include <iostream>
using namespace std;
int lecturaConLimites();
int main() {

	cout << lecturaConLimites() << endl;

	system("pause");
	return 0;
}
int lecturaConLimites() {
	int numero = 0;
	do {
		cout << "Introduce un numero entre 1 y 10" << endl;
		cin >> numero;
	} while (numero < 1 || numero >10);

	return numero;
}