#include <stdio.h>
#include "operaciones.h"

int main() {
    int opcion;
    float a, b, resultado;

    printf("=== CALCULADORA EN C ===\n");
    printf("1. Sumar\n2. Restar\n3. Multiplicar\n4. Dividir\n");
    printf("Selecciona una opcion (1-4): ");
    scanf("%d", &opcion);
    printf("Introduce el primer numero: ");
    scanf("%f", &a);
    printf("Introduce el segundo numero: ");
    scanf("%f", &b);

    if (opcion == 1) resultado = sumar(a, b);
    else if (opcion == 2) resultado = restar(a, b);
    else if (opcion == 3) resultado = multiplicar(a, b);
    else if (opcion == 4) {
        if (b == 0) { printf("Error: division entre cero\n"); return 1; }
        resultado = dividir(a, b);
    } else { printf("Opcion invalida\n"); return 1; }

    printf("Resultado: %.2f\n", resultado);
    printf("========================\n");
    return 0;
}