#include <stdio.h>

int main() {
    int numero = 5;
    int factorial = 1;
    while (numero > 1) {
        factorial *= numero;
        numero--;
    }
    printf("El factorial es: %d\n", factorial);
    return 0;
}
