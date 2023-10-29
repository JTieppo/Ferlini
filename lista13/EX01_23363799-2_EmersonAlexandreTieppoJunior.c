#include <stdio.h>

int main(){
    int vetor[10];

    for(int x = 0; x < 10; x++){
        printf("Digite o numero: ");
        scanf("%i", &vetor[x]);
    }

    for(int x = 0; x < 10; x++){
        printf("%i ", vetor[x]);
    }
}