#include <iostream>
#include "funciones.h"



int main() {
    double x;
    int iteraciones;

    std::cout << "Ingrese valor de x: ";
    std::cin >> x;

    std::cout << "Ingrese numero de iteraciones: ";
    std::cin >> iteraciones;

    std::cout << "\nResultados:\n";
    std::cout << "sin(" << x << ") = " << senoTaylor(x, iteraciones) << endl;
    std::cout << "cos(" << x << ") = " << cosenoTaylor(x, iteraciones) << endl;
    std::cout << "e^" << x << " = " << exponencialTaylor(x, iteraciones) << endl;

    return 0;
}
