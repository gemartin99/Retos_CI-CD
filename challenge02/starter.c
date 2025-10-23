#include <stdio.h>

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}


int multiplicacion(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    if (b == 0) {
        fprintf(stderr, "no puedes dividir entre cero xD.\n");
        return 0;
    }
    return a / b;
}

int main() {
    printf("Calculadora reto 2 :).\n");
    int x = 10;
    int y = 5;
    printf("Suma: %d + %d = %d\n", x, y, suma(x, y));
    printf("Resta: %d - %d = %d\n", x, y, resta(x, y));
    printf("Multiplicación: %d * %d = %d\n", x, y, multiplicacion(x, y));
    printf("División: %d / %d = %d\n", x, y, division(x, y));
    printf("División por cero (10/0): %d\n", division(10, 0));
    return 0;
}