#include <iostream>
#include <cctype>


using namespace std;

int main() {
	char X;
	
	cout << "Introduce un caracter: " << endl;
	cin >> X;
	
	/*
	if (isalpha(X)) { cout << "es una letra" << endl; }
	if (isalnum(X)) { cout << "es alfanumerico" << endl; }
	if (isdigit(X)) { cout << "es un numero" << endl; }
	if (islower(X)) { cout << "es una letra minucula" << endl; }
	if (isupper(X)) { cout << "es una letra mayuscula" << endl; }
	*/

	if (char(X) >= 65 && char(X) < 123 ) { cout << "es una letra" << endl; }
	if (char(X) >= 48 && char(X) < 58 || char(X) >= 65 && char(X) < 91 || char(X) >= 97 && char(X) < 123)  { cout << "es alfanumerico" << endl; }
	if (char(X) >= 48 && char(X) < 58) { cout << "es un numero" << endl; }
	if (char(X) >= 97 && char(X) < 123) { cout << "es una letra minuscula" << endl; }
	if (char(X) >= 65 && char(X) < 91) { cout << "es una letra mayuscula" << endl; }
	
	system("pause");
	return 0;
}