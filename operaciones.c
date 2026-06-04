#include "operaciones.h"

float sumar(float a, float b) { return a + b; }
float restar(float a, float b) { return a - b; }
float multiplicar(float a, float b) { return a * b; }
float dividir(float a, float b) {
    if (b == 0) { return 0; }
    return a / b;
}