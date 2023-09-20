#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL ,"Portuguese");

    char frase[100];
    char *palavras[100]; // Array para armazenar as palavras
    int numPalavras = 0;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    // Usando strtok para dividir a frase em palavras
    char *token = strtok(frase, " \t\n"); // Divisores: espaço, tabulação e nova linha

    while (token != NULL) {
        palavras[numPalavras] = token;
        numPalavras++;
        token = strtok(NULL, " \t\n");
    }

    printf("Palavras individuais:\n");
    for (int i = 0; i < numPalavras; i++) {
        printf("%s\n", palavras[i]);
    }

    return 0;
}
