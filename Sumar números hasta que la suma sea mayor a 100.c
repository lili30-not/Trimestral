#include <stdio.h>

int main() {
    int suma = 0, numero;
    do {
        printf("Introduce un número: ");
        scanf("%d", &numero);
        suma += numero;
    } while (suma <= 100);
    printf("La suma total es: %d\n", suma);
    return 0;
}
