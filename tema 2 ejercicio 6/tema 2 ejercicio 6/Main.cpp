#include <iostream>

using namespace std;
/*Escribe un programa que, atendiendo al método de evaluación de la asignatura Fundamentos
de Programación, calcule la nota final a partir de las calificaciones obtenidas en cada examen
(diciembre, febrero, abril, junio), cada práctica (hay 5) y la actividad adicional. Pedirá al
usuario cada calificación y mostrará la nota final obtenida. No tendrá en cuenta los requisitos
de mínimos de algunas calificaciones (ni que las prácticas estén aprobadas ni que al menos se
haya tenido un 4 en el examen final).*/
int main() {

	double exdic, exfeb, exabril, exjunio, p1, p2, p3, p4, p5, ptotal, aa, media;
	//notas de examenes
	cout << "introduce la nota del examen de diciembre: ";
	cin >> exdic;
	cout << "introduce la nota del examen de febrero: ";
	cin >> exfeb;
	cout << "introduce la nota del examen de abril: ";
	cin >> exabril;
	cout << "introduce la nota del examen de junio: ";
	cin >> exjunio;
	exdic = exdic * 0.05;
	exfeb = exfeb * 0.1;
	exabril = exabril * 0.1;
	exjunio = exjunio * 0.45;

	//notas practicas
	cout << "introduce la nota de la practica 1: ";
	cin >> p1;
	cout << "introduce la nota de la practica 2: ";
	cin >> p2;
	cout << "introduce la nota de la practica 3: ";
	cin >> p3;
	cout << "introduce la nota de la practica 4: ";
	cin >> p4;
	cout << "introduce la nota de la practica 5: ";
	cin >> p5;

	ptotal = 0.2 * (p1 * 0.1 + p2 * 0.15 + p3 * 0.25 + p4 * 0.3 + p5 * 0.2);

	//actividad adicional

	cout << "Introduzca la nota de la actividad adicional: ";
	cin >> aa;
	aa = aa *0.1;

	//calculo de la nota final

	media = aa + ptotal + exdic + exfeb + exabril + exjunio;
	cout << "La nota final del curso es: " << media << endl;
	system("pause>nul");

	return 0;
}