#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
const int maxintentos = 3;
int averigua(int numero);
int main() {
	ifstream entrada;
	double numero;
	entrada.open("numeros.txt");
	if (entrada.is_open()) {	
		do {
			entrada >> numero;
			if (numero == 0) break;
			averigua(numero);
		} while (numero != 0);
	}
	else {
		cout << "Error al abrir el archivo" << endl;
	}
	system("pause");
	entrada.close();
	return 0;
}

int averigua(int numero) {
	int intentos = 0;
	double raiz = sqrt(numero);
	double user_calc = 0;
	double aprox = raiz - 0.001;
	double aprox2 = raiz + 0.001;
	do {
		intentos++;
		system("echo.");
		if (intentos > maxintentos) break;
		cout << "Averigua la raiz de: " << numero << endl;
		cin >> user_calc;	
		if (user_calc >= aprox || user_calc == raiz) { //|| (user_calc <= aprox2)	
			//si añado mas de dos condiciones se ponen las barras en verde
			system("echo.");
			cout << "Enhorabuena, has encontrado la raiz de " << numero << " " << "con un error menor de 0.001" << endl;
			cout << "Has conseguido acertar en " << intentos << " intentos" << endl;
			break;
		} else if (user_calc < aprox) {
			system("echo.");
			cout << user_calc << " es menor que la raiz de " << numero << endl;
		}/* else if (user_calc > aprox2) {
			system("echo.");
			cout << user_calc << " es mayor que la raiz de " << numero << endl;
		}*/
	} while (intentos <= maxintentos);
	if (intentos > maxintentos) {
		cout << "lo siento, no lo has conseguido" << endl;
	}
	return 0;
}