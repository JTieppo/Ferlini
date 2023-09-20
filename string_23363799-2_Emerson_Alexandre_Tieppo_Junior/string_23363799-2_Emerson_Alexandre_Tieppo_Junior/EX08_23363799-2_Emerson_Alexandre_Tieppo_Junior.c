#include <stdio.h>
#include <string.h>

//criei a função externa para facilitar o desenvolvimento

int contarOcorrenciasSubstring(const char *stringMaior, const char *substring) {
    int contagem = 0;
    int tamanhoMaior = strlen(stringMaior);
    int tamanhoSubstring = strlen(substring);

    for (int i = 0; i <= tamanhoMaior - tamanhoSubstring; i++) {
        if (strncmp(stringMaior + i, substring, tamanhoSubstring) == 0) {
            contagem++;
        }
    }

    return contagem;
}

int main() {
    char stringMaior[100];
    char substring[100];

    printf("Digite a string maior: ");
    scanf("%s", stringMaior);

    printf("Digite a substring: ");
    scanf("%s", substring);

    int resultado = contarOcorrenciasSubstring(stringMaior, substring);

    printf("A substring ocorre %d vezes na string maior.\n", resultado);

    return 0;
}
