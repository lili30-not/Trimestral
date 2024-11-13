#include <stdio.h>

int main() {
    int numeros[] = {10, 20, 30, 40, 50};
    int suma = 0;
    for (int i = 0; i < 5; i++) {
        suma += numeros[i];
    }
    printf("La suma es: %d\n", suma);
    return 0;
}
