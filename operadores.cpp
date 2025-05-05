/*
Operadores aritméticos:
	+ Suma
	- Resta
	* Multiplicación
	/ División
	% Módulo

Operadores relacionales:
	== Igual a 
	!= Diferente de
	> Mayor que
	< Menor que
	>= Mayor o igual que
	<= Menor o igual que

Operadores lógicos:
	&& AND
	|| OR
	 ! NOt
*/

#include<iostream>

using namespace std;

int main(){
	int a = 10, b = 5;
	cout << "a: " << a << ";  b: " << b << ";\n" << endl;
	cout << "Suma a + b: " <<  a + b << endl;
	cout << "(a > b): "<< (a > b) << endl;
	cout << "(a > 5 && b < 10): " << (a > 5 && b < 10) << endl;
	cout << "(a < b): " << (a < b) << endl;

	return 0;
}

