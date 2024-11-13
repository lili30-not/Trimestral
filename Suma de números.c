#include <stdio.h>

int main() {
    int suma = 0;
    for (int i = 2; i <= 20; i += 2) {
        suma += i;
    }
    printf("La suma de los números pares hasta 20 es: %d\n", suma);
    return 0;
}
