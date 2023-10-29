#include <stdio.h>

int main(){
    int vetor_um[5];
    int vetor_dois[5];

    for(int x = 0; x < 5; x++){
        printf("Digite um numero para o vetor um: ");
        scanf("%i", &vetor_um[x]);
        printf("Digite um numero para o vetor dois: ");
        scanf("%i", &vetor_dois[x]);
    }

    for(int x = 0; x < 5; x++){
        vetor_um[x] = vetor_um[x] + vetor_dois[x];
    }
    for(int x = 0; x < 5; x++){
        printf("A soma dos vetores posicao %i: %i\n", x, vetor_um[x]);
    }
}