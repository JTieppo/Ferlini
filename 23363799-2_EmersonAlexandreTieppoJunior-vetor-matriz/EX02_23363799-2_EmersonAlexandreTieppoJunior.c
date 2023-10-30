#include <stdio.h>
#include <string.h>

int main() {
    char nomes_sobrenomes[10][50]; // Matriz de strings para armazenar os nomes e sobrenomes

    // Solicite 10 nomes e sobrenomes e armazene na matriz
    for (int i = 0; i < 10; i++) {
        printf("Digite um nome e sobrenome: ");
        scanf("%s %s", nomes_sobrenomes[i], nomes_sobrenomes[i]);
        printf("%i", i);
    }

    // Apresente a matriz completa
    printf("Matriz de nomes e sobrenomes:\n");
    for (int i = 0; i < 10; i++) {
        printf("%s %s\n", nomes_sobrenomes[i], nomes_sobrenomes[i] + 20);
    }

    return 0;
}
