#include <stdio.h>

int verificaPrimo(int numero) {
    if (numero <= 1) {
        return 0;  // Números menores ou iguais a 1 não são primos
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0;  // Se o número for divisível por algum número entre 2 e a raiz quadrada do número, não é primo
        }
    }

    return 1;  // Se não houver divisores entre 2 e a raiz quadrada do número, é primo
}

int main() {
    int numero = 16;  // Altere o número para verificar se é primo ou não

    int resultado = verificaPrimo(numero);
    if (resultado == 1) {
        printf("O número %d é primo.\n", numero);
    } else {
        printf("O número %d não é primo.\n", numero);
    }

    return 0;
}
