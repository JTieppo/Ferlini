#include <stdio.h>

int contarDigitos(int numero, int digito) {
    int contagem = 0;
    while (numero != 0) {
        int d = numero % 10; // Obtém o dígito menos significativo
        if (d == digito) {
            contagem++;
        }
        numero /= 10; // Remove o dígito menos significativo
    }
    return contagem;
}

int main() {
    int digito = 2;
    int numero = 1234124512;
    printf("A quantidade de vezes que o digito %d aparece: %d\n", digito, contarDigitos(numero, digito));
    return 0;
}
