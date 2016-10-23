#include <iostream>
using namespace std;
int main() {
	int numero, suma;
	suma = 0;
	cout << "introduce numero: ";
	cin >> numero;
	while (numero > 0) {
		suma = suma + numero % 10;
		numero = numero / 10;
	}
	cout << suma << endl;
	system("pause");
	return 0;
}