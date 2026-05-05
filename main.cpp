#include <iostream>

// VALOR ABSOLUTO
double absoluto(double x) {
    if (x < 0)
        return -x;
    else
        return x;
}

// EXPONENCIAL e^x
double expTaylor(double x) {
    double suma = 1;
    double termino = 1;

    for (int i = 1; i <= 10; i++) {
        termino = termino * x / i;
        suma = suma + termino;
    }

    return suma;
}

// SENO
double senoTaylor(double x) {
    double suma = x;
    double termino = x;

    for (int i = 1; i <= 10; i++) {
        termino = -termino * x * x / ((2*i)*(2*i+1));
        suma = suma + termino;
    }

    return suma;
}

// COSENO
double cosenoTaylor(double x) {
    double suma = 1;
    double termino = 1;

    for (int i = 1; i <= 10; i++) {
        termino = -termino * x * x / ((2*i-1)*(2*i));
        suma = suma + termino;
    }

    return suma;
}

// RAIZ CUADRADA (Newton-Raphson)
double raizNewton(double x) {
    if (x < 0) return -1;

    double r = x;

    for (int i = 0; i < 10; i++) {
        r = (r + x / r) / 2;
    }

    return r;
}

int main() {
    double x;

    std::cout << "Ingrese un valor x: ";
    std::cin >> x;

    std::cout << "\n--- RESULTADOS ---\n";
    std::cout << "e^x ≈ " << expTaylor(x) << std::endl;
    std::cout << "sen(x) ≈ " << senoTaylor(x) << std::endl;
    std::cout << "cos(x) ≈ " << cosenoTaylor(x) << std::endl;
    std::cout << "valor absoluto = " << absoluto(x) << std::endl;
    std::cout << "raiz cuadrada ≈ " << raizNewton(x) << std::endl;

    return 0;
}
