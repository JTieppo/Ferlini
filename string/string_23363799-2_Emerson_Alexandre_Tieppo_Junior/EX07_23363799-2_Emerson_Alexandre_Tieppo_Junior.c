#include <stdio.h>
#include <string.h>

//criei a função externa para facilitar o desenvolvimento 

void substituirCaractere(char *str, char antigo, char novo) {
    int tamanho = strlen(str);

    for (int i = 0; i < tamanho; i++) {
        if (str[i] == antigo) {
            str[i] = novo;
        }
    }
}

int main() {
    char frase[100];
    char antigoCaractere, novoCaractere;

    printf("Digite uma string: ");
    scanf("%s", frase);

    printf("Digite o caractere a ser substituído: ");
    scanf(" %c", &antigoCaractere);

    printf("Digite o novo caractere: ");
    scanf(" %c", &novoCaractere);

    substituirCaractere(frase, antigoCaractere, novoCaractere);

    printf("String após substituição: %s\n", frase);

    return 0;
}