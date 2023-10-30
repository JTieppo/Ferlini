#include <stdio.h>

int main() {
    int vetor[5];

    for (int x = 0; x < 5; x++){
        printf("Escreva um numero: ");
        scanf("%i", &vetor[x]);
    }

    printf("%i", vetor[2]);
}
