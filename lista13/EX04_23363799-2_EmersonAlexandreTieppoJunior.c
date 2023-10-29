#include <stdio.h>

int main(){
    float vetor[10];
    float maior, menor;
    int contador = 0;


    for(int x = 0; x < 10; x++){
        printf("Digite o numero: ");
        scanf("%f", &vetor[x]);
    }

    for(int x = 0; x < 10; x++){
        if (contador == 0)
        {
            maior = vetor[x];
            menor = vetor[x];
        } else {
            if (vetor[x] > maior){
                maior = vetor[x];
            } else if (vetor[x] < menor){
                menor = vetor[x];
            }
        }
        contador ++;
    }
    printf("O maior numero: %.2f \n", maior);
    printf("O menor numero: %.2f ", menor);
}