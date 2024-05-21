#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeros1[5], numeros2[5], numeros3[10];
    int i;

    printf("Ingrese 5 numeros para el primer array:\n");
    for (i = 0; i < 5; i++) {
        printf("Escriba un número: ");
        scanf("%d", &numeros1[i]);
    }

    printf("Ingrese 5 numeros para el segundo array:\n");
    for (i = 0; i < 5; i++) {
        printf("Escriba un número: ");
        scanf("%d", &numeros2[i]);
    }

    for (i = 0; i < 5; i++) {
        numeros3[i] = numeros1[i];
        numeros3[5 + i] = numeros2[i];
    }

    printf("Los 10 numeros son:\n");
    for (i = 0; i < 10; i++) {
        printf("%d\n", numeros3[i]);
    }

    return 0;
}

