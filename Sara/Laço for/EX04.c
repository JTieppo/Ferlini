#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicializa a semente para geração de números aleatórios
    srand(time(NULL));

    // Gera um número aleatório entre 1 e 100
    int numeroAleatorio = rand() % 100 + 1;
    int tentativa, tentativas = 0;

    printf("Bem-vindo ao Jogo de Adivinhação!\n");
    printf("Tente adivinhar o número entre 1 e 100.\n");

    do {
        printf("Digite sua tentativa: ");
        scanf("%d", &tentativa);
        tentativas++;

        if (tentativa < numeroAleatorio) {
            printf("Tente um número maior.\n");
        } else if (tentativa > numeroAleatorio) {
            printf("Tente um número menor.\n");
        } else {
            printf("Parabéns! Você acertou o número %d em %d tentativas!\n", numeroAleatorio, tentativas);
        }
    } while (tentativa != numeroAleatorio);

    return 0;
}
