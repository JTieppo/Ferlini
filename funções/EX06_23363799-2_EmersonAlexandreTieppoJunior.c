#include <stdio.h>
#include <string.h>

char* converterBase(int numero, int base) {
    static char representation[50]; // Array para armazenar a representação na nova base
    char caracteres[] = "0123456789abcdefghijklmnopqrstuvwxyz"; // Caracteres para representar dígitos além do 9

    int indice = 0; // Índice para a representação

    if (base < 2 || base > 36) {
        representation[0] = '\0';
        return representation;
    }

    // Verifica se o número é negativo
    int negativo = 0;
    if (numero < 0) {
        negativo = 1;
        numero = -numero;
    }

    // Enquanto o número não for zero, continue dividindo e salvando os restos
    while (numero > 0) {
        representation[indice++] = caracteres[numero % base];
        numero /= base;
    }

    if (negativo) {
        representation[indice++] = '-';
    }

    representation[indice] = '\0';

    // Reverte a representação na base desejada
    int i, j;
    for (i = 0, j = indice - 1; i < j; i++, j--) {
        char temp = representation[i];
        representation[i] = representation[j];
        representation[j] = temp;
    }

    return representation;
}

int main() {
    int num = 245; // Número a ser convertido
    int base = 16; // Base para conversão

    char* resultado = converterBase(num, base);
    printf("O número %d na base %d é: %s\n", num, base, resultado);

    return 0;
}
