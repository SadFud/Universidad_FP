#include <iostream>
using namespace std;
int main() {
	char X;
	int ma, min, num;
	ma = 0;
	min = 0;
	num = 0;
	do {		
		cout << "introduce caracter: ";
		cin >> X;
		if (isupper(X)) {
			ma = ma + 1;
		}
		if (isdigit(X)) { 
			num = num + 1;
		}
		if (islower(X)) {
			min = min + 1;
		}
	} while (X != char(42));
	cout << "Numero de mayusculas: " << ma << endl;
	cout << "numero de minusculas: " << min << endl;
	cout << "Numero de digitos: " << num << endl;
	system("pause");
	return 0;
}