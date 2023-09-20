#include <stdio.h>
#include <string.h>
#include <ctype.h>

void converterParaMaiusculas(char *str) {
    int tamanho = strlen(str);

    for (int i = 0; i < tamanho; i++) {
        str[i] = toupper(str[i]);
    }
}

void converterParaMinusculas(char *str) {
    int tamanho = strlen(str);

    for (int i = 0; i < tamanho; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char frase[100];
    int opcao;

    printf("Digite uma string: ");
    scanf("%s", frase);

    printf("Escolha a opção:\n");
    printf("1 - Converter para maiúsculas\n");
    printf("2 - Converter para minúsculas\n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        converterParaMaiusculas(frase);
    } else if (opcao == 2) {
        converterParaMinusculas(frase);
    } else {
        printf("Opção inválida.\n");
        return 1;
    }

    printf("String convertida: %s\n", frase);

    return 0;
}
