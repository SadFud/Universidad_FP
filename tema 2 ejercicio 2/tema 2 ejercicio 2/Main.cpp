#include <iostream>

using namespace std;



int main() {
	//Primera parte
	/*float radio, pi, area;
	radio = 7.28;
	pi = 3.14159;
	area = radio * pi;
	cout << "El area de un circulo de radio " << radio << " es igual a: " << area << endl;
	system("pause>nul");
	*/
	//>Fin de la primera parte
	float radio, pi, area;
	cout << "Introduce el radio del circulo: ";
	cin >> radio;
	pi = 3.14159;
	area = radio * pi;
	cout << "El area del circulo de radio " << radio << " es: " << area << endl;
	system("pause");
	return 0;
}