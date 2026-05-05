#include "../include/interface.hpp"

double absoluto(double x){
  if(x < 0)
    return -x;
  else
    return x;
}

double expTaylor(double x){
  double suma = 1;
  double termino = 1;

  for(int i = 1; i <= 10; i++){
    termino = termino * x / i;
    suma = suma + termino;
}
  return suma;
}

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

