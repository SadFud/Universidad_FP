#include <iostream>
using namespace std;

int main(){

	int a, b, c;

	cout << "Introduzca el primer numero entero: " << endl;
	cin >> a;
	cout << "Introduzca el segundo numero entero: " << endl;
	cin >> b;
	cout << "Introduzca el tercer numero entero: " << endl;
	cin >> c;
	cout << endl;

	if (a < b && a < c) {
		cout << a << endl;
		if (b < c) {
			cout << b << endl;
			cout << c << endl;
		}
		if (c < b) {
			cout << c << endl;
			cout << b << endl;
		}
	}


	if (b < a && b < c) {
		cout << b << endl;
		if (a < c) {
			cout << a << endl;
			cout << c << endl;
		}
		if (c < a) {
			cout << c << endl;
			cout << a << endl;
		}
	}

	if (c < a && c < b) {
		cout << c << endl;
		if (a < b) {
			cout << a << endl;
			cout << b << endl;
		}
		if (b < a)
			cout << b << endl;
		cout << a << endl;
	}

	return 0;
}