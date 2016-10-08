#include <iostream>

using namespace std;

int main() {

	double base, destino, cargo, extra, hijos, mayores, bruto, neto, irpf, retencion;

	//Peticion de datos

	cout << "Introduce el sueldo base: "; //sueldo base
	cin >> base;
	cout << "Introduce el complemento de destino: "; //destino
	cin >> destino; 
	cout << "Introduce el complemento de cargo academico: "; //cargo
	cin >> cargo;
	cout << "Introduce las horas extra realizados: "; //horas extra
	cin >> extra;
	cout << "Introduce el numero de hijos a tu cargo: "; //numero de hijos
	cin >> hijos;
	cout << "Introduce el numero de mayores a tu cargo: "; //mayores a cargo
	cin >> mayores;

	bruto = base + destino + cargo + (23 * extra); //calculo del sueldo bruto

	//calculo de descuentos en el irpf
	irpf = 0.24;
	irpf = irpf - (hijos * 0.02) - (mayores * 0.01);
	
	/*
	if (mayores = 0 && hijos = 0) { //irpf general
		irpf = 0.24;
	}
	*/


	retencion = (bruto * irpf); /calculo de la retencion
	neto = bruto - retencion; //calculo del sueldo neto

	irpf = irpf * 100;

	//salida de datos
	system("cls");
	cout << "calculo de la nimina.-" << endl;
	cout << "sueldo bruto: " << bruto << " $" << endl;
	cout << "Porcentaje de IRPF: " << irpf << " %" << endl;
	cout << "Retencion por IRPF: " <<  retencion << " $" << endl;
	cout << "Sueldo neto: " << neto << " $" << endl;
	system("pause");

	return 0;
}