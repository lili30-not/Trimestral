#include <stdio.h>

int main() {
    int altura = 5;
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
