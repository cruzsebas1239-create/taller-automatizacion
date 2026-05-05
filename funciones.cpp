#include "funciones.h"
#include <cmath>

double factorial(int n) {
    double fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

double senoTaylor(double x, int n) {
    double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += pow(-1, i) * pow(x, 2 * i + 1) / factorial(2 * i + 1);
    }
    return suma;
}

double cosenoTaylor(double x, int n) {
    double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += pow(-1, i) * pow(x, 2 * i) / factorial(2 * i);
    }
    return suma;
}

double exponencialTaylor(double x, int n) {
    double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += pow(x, i) / factorial(i);
    }
    return suma;
}
