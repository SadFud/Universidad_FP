#include <iostream>
using namespace std;
int main() {
	int val1, val2, total;
	total = 0;
	cout << "introduce numero y posteriormente la potencia" << endl;
	cin >> val1;
	cin >> val2;
	for (int i = 0; i <= val2; i++) {
		total = total + val1;
	}
	cout << total << endl;
	system("pause");
	return 0;
}