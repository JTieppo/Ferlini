#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int vetor[10];
    int busca;
    int local = -1; 
    int x;

    for (x = 0; x < 10; x++) {
        printf("Digite o numero: ");
        scanf("%i", &vetor[x]);
    }

    printf("Qual numero voce deseja saber se existe no vetor: ");
    scanf("%i", &busca);

    x = 0;
    while (x < 10) {
        if (busca == vetor[x]) {
            local = x;
            break; 
        }
        x++;
    }

    if (local != -1) {
        printf("O numero %i aparece a primeira vez no local %i do vetor.\n", busca, local);
    } else {
        printf("O numero %i nao foi encontrado no vetor.\n", busca);
    }

    return 0;
}
