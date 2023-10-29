#include <stdio.h>

int main(){
    float vetor[10];
    float soma = 0;

    for(int x = 0; x < 10; x++){
        printf("Digite o numero: ");
        scanf("%f", &vetor[x]);
    }

    for(int x = 0; x < 10; x++){
        soma += vetor[x];
    }
    printf("%.2f ", soma);
}