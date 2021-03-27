// e01a.cpp, exercicio 01, Assignment 1.4, 2020-03-11
// 1.1. Paradigma imperativo

#include <iostream>
using namespace std;

// Parâmetros de entrada
int a = 1071;  // primeiro número
int b = 462;  // segundo número

int main2() {
	while(a != b) {  // Se os dois números de entrada são iguais, imprime um deles
	if (a > b)       // Caso contrário, troca o maior pela sua diferença
		a = a - b;
	else
		b = b - a;
	}                // repete o laço até que os dois sejam iguais
	cout << a << endl;
	return 0;
}
