#include <iostream>
using namespace std;
bool esPrimo(int n);
int menu();
void op1(int a, int b);
int op2(int a);
int op3(int a);

int main() {
	int a, b;
	a = 0;
	b = 0;
	char opcion = menu();
	opcion;
	if (opcion == 'a') {
		cout << "introduce dos valores para definir el rango" << endl;
		cin >> a;
		cin >> b;
		system("cls");
		op1(a, b);
	}
	else if (opcion == 'b'){
		cout << "introduce un numero" << endl;
		cin >> a;
		//op2(a);
	}
	else {
		cout << "introduce un numero" << endl;
		cin >> a;
		cout << op3(a)<< endl;
	}
	system("pause");
	return 0;
}

bool esPrimo(int n) {
/*	for (int i = 1; i <= n; i++) {
		for (int j = 2; j <= i; j++) {
			while (i != j) {
				if (i%j == 0) {
					return false;
				}
				else {
					return true;
				}
			}
		}
	}*/
	
	if (n == 2) {
		return true;
	}
	else if (n == 0) {
		return false;
	}
	else if (n != 0) {
		if (n % 2 == 0) {
			return false;
		}
		else {
			for (int i = 2; i <= n; i++) {
				if (n % i == 0) {
					if (n == i) {
						return true;
					}
					else {
						return false;
					}
				}
			}
		}
	}
	
}

int menu() {
	char opcion = 0;
	do {
		system("cls");
		cout << "a. Escribir todos los números primos que hay entre dos naturales dados." << endl;
		cout << "b. Escribir el primer número primo mayor que un natural dado." << endl;
		cout << "c. Contar los primos menores que un natural dado." << endl;
		system("echo.");
		cout << "elige una opcion" << endl;
		cin >> opcion;
	} while (opcion != 'a' && opcion != 'b' && opcion != 'c');
	return opcion;
}

void op1(int a, int b) {
	for (int i = a; i < b + 1; i++) {
		if (esPrimo(i)) {
			cout << i << endl;
		}
	}
}

int op3(int a) {
	int total = 0;
	for (int i = 0; i < a; i++) {
		if (esPrimo(i)) {
			total++;
		}
	}
	return total;
}

int op2(int a) {
	int valor = 0;


	return valor;
}