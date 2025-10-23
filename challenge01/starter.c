#include <stdio.h>
#include <assert.h>

int suma(int a, int b) {
    return a + b;
}

int main() {
    // Ejemplo de uso rápido
    assert(suma(2, 3) == 5);
    printf("Ok\n");
    return 0;
}