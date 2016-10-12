#include <iostream>

using namespace std;
int main() {
	double temp;
	cout << "introduce temperatura: " << endl;
	cin >> temp;
	if (temp > 30) { cout << "Natacion" << endl; };
	if (temp > 20 && temp <= 30) { cout << "Tenis"; };
	if (temp > 10 && temp <= 20) { cout << "Golf"; };
	if (temp > 5 && temp <= 10) { cout << "Esqui"; };
	if (temp <= 5) { cout << "Parchis"; };
	system("pause>nul");
	return 0;
}