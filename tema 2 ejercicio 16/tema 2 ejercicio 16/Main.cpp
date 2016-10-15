#include <iostream>
using namespace std;

int main() {
	double cubicos;
	cout << "Introduce los metros cubicos: " << endl;
	cin >> cubicos;
	if (cubicos < 0) { cout << "El valor de metros cubicos introducido es erroneo"; }
	if (cubicos > 0 && cubicos <= 100) {
		cout << cubicos*0.15 << " $.";
	}
	if (cubicos > 100 && cubicos <= 500) {
		cout << 100 * 0.15 + (cubicos - 100) * 0.20 << " $.";
	}
	if (cubicos > 500 && cubicos <= 1000) {
		cout << 100 * 0.15 + 400 * 0.20 + (cubicos - 500) * 0.35 << " $.";
	}
	if (cubicos > 1000) {
		cout << 100 * 0.15 + 400 * 0.20 + 500 * 0.35 + (cubicos - 1000) * 0.80 << " $.";
	}
	system("echo.");
	system("pause");
	return 0;
}