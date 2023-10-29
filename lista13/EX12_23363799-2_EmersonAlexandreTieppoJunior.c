#include <stdio.h>

int main() {
    int vetor_um[5];
    int vetor_dois[5];

    for (int x = 0; x < 5; x++) {
        printf("Digite um numero para o vetor um: ");
        scanf("%i", &vetor_um[x]);
        printf("Digite um numero para o vetor dois: ");
        scanf("%i", &vetor_dois[x]);
    }

    int saoIguais = 1; 

    for (int x = 0; x < 5; x++) {
        if (vetor_um[x] != vetor_dois[x]) {
            saoIguais = 0;
            break;
        }
    }

    if (saoIguais) {
        printf("Todos os elementos sao iguais.\n");
    } else {
        printf("Sao diferentes.\n");
    }

    return 0;
}
