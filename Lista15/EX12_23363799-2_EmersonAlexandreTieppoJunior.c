#include <stdio.h>

int inverterNumero(int numero) {
    int invertido = 0;
    while(numero > 0) {
        invertido = invertido * 10 + numero % 10;
        numero = numero / 10;
    }
    return invertido;
}

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    int numeroInvertido = inverterNumero(numero);
    printf("O número %d invertido é %d\n", numero, numeroInvertido);

    return 0;
}
