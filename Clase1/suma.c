#include <stdio.h>

int main() {
    float a, b, suma;

    printf("Ingresa el primer numero real: ");
    scanf("%f", &a);

    printf("Ingresa el segundo numero real: ");
    scanf("%f", &b);

    suma = a + b;

    printf("La suma es: %.2f\n", suma);

    return 0;
}