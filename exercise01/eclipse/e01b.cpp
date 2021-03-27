// e01b.cpp, exercicio 01, Assignment 1.4, 2020-03-11
// 1.1. Paradigma orientação a objeto

#include <iostream>
using namespace std;

// Parâmetros de entrada
int c = 1071;  // primeiro número
int d = 462;   // segundo número

class gcd_c {
    public:
        int a, b;
        int calc() {
            while(a != b)
                if (a > b)
                     a = a - b;
                else
                    b = b - a;
            return a;
        }
};

int main() {
	gcd_c gcd;
	gcd.a = c;
	gcd.b = d;
	cout << gcd.calc() << endl;
	return 0;
}
