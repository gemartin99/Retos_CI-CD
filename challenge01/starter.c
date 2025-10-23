#include <stdio.h>

int suma(int a, int b) {
    return a + b;
}

int main() {
    // Ejemplo de uso rápido
    int num1 = 2;
    int num2 = 3;
    printf("La suma de %d y %d es: %d\n", num1, num2, suma(num1, num2));

    return 0;
}