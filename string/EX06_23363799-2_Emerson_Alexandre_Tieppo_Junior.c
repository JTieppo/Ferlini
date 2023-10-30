#include <stdio.h>
#include <string.h>

// A partir daqui utilizarei contadores menores para agilizar o desenvolvimento como i, j, k...

void inverterString(char *str) {
    int tamanho = strlen(str);
    int contador, posicao;
    char temp;

    for (contador = 0, posicao = tamanho - 1; contador < posicao; contador++, posicao--) {
        temp = str[contador];
        str[contador] = str[posicao];
        str[posicao] = temp;
    }
}

int main() {
    char frase[100];

    printf("Digite uma string: ");
    scanf("%s", frase);

    inverterString(frase);

    printf("String invertida: %s\n", frase);

    return 0;
}
