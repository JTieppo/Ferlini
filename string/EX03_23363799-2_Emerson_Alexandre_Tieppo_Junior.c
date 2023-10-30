#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char frase[100], fraseSemEspacos[100];
    int i, j;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    // Remove espaços à frente
    i = 0;
    while (frase[i] == ' ') {
        i++;
    }

    // Remove espaços atrás
    j = strlen(frase) - 2; // Subtrai 2 para excluir '\n' e '\0'
    while (frase[j] == ' ') {
        j--;
    }

    // Copia a parte sem espaços para outra string
    int k = 0;
    for (; i <= j; i++) {
        fraseSemEspacos[k++] = frase[i];
    }
    fraseSemEspacos[k] = '\0';

    // Verifica se é um palíndromo
    int tamanho = strlen(fraseSemEspacos);
    int palindromo = 1; // Assume que é um palíndromo por padrão

    for (i = 0; i < tamanho / 2; i++) {
        if (fraseSemEspacos[i] != fraseSemEspacos[tamanho - i - 1]) {
            palindromo = 0; // Não é um palíndromo
            break;
        }
    }

    if (palindromo) {
        printf("A frase é um palíndromo.\n");
    } else {
        printf("A frase não é um palíndromo.\n");
    }

    return 0;
}

