#include <stdio.h>

int maior(int *vetor, int tamanho){
    int maior;
    for (int x = 0; x < tamanho; x++){
        if (x == 0){
            maior = vetor[0];
        } else{
            if (vetor[x] > maior){
                maior = vetor[x];
            }
        }
    }
    return maior;
}

int main(){
    int tamanho = 5;
    int vetor[tamanho];
    
    for (int x = 0; x < 5; x++){
        vetor[x] = x;
    }

    printf("O maior numero do vetor: %i", maior(vetor, tamanho));
}