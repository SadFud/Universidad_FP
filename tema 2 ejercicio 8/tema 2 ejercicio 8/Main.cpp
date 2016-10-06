#include <iostream>
#include <cmath>

using namespace std;

//#define Pi 3.14159;

int main() {

	double lado1, lado2, angulo, pi, rad, area;
	pi = 3.14159;
	cout << "elige lado 1: ";
	cin >> lado1;
	cout << "elige lado 2: ";
	cin >> lado2;
	cout << "elige angulo: ";
	cin >> angulo;
	rad = (angulo * pi) / 180;
	area = 0.5 * lado1 * lado2 * sin(angulo);
	cout << "area: " << area;
	system("pause>nul");
	return 0;
}