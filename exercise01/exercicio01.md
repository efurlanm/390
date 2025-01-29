## Exercício 01, Assignment 1.4, 2020-03-11

This exercise involves the finding of the greatest common divisor (GCD) of two numbers, i.e. the largest number that divides both of them without leaving a remainder. The Euclidean algorithm is an efficient method for computing GCD of a and b: check to see if a and b are equal. If so, print one of them and stop. Otherwise, replace the larger one by their difference and repeat.

Consider that the two input numbers are positive, provide two implementations for the GDC Euclidian algorithm in two different paradigms/languages mentioned in section 1.1.

1.1. Paradigma imperativo


```c++
#include <iostream>
using namespace std;

// Parâmetros de entrada
int a = 1071;  // primeiro número
int b = 462;  // segundo número
```

Rotina principal, sem usar recursão:


```c++
while(a != b) {  // Se os dois números de entrada são iguais, imprime um deles
    if (a > b)   // Caso contrário, troca o maior pela sua diferença
        a = a - b;
    else
        b = b - a;
}                // repete o laço até que os dois sejam iguais
cout << a << endl;
```

    21


1.2. Usando paradigma orientação a objeto


```c++
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

gcd_c gcd;
gcd.a = c;
gcd.b = d;
cout << gcd.calc() << endl;

```

    21


## REFERÊNCIAS

- https://www.tutorialspoint.com/cplusplus-program-to-find-gcd
- https://www.geeksforgeeks.org/c-program-for-basic-and-extended-euclidean-algorithms/
- https://www.techiedelight.com/euclids-algorithm-to-find-gcd-of-two-numbers/
- http://www.cplusplus.com/doc/tutorial/classes/
