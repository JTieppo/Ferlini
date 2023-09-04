// Aluno      :  Emerson Alexandre Tieppo Junior
// RA         :  23363799-2
// Professor  :  Ferlini

#include <stdio.h>

int main() {
    int numero;
    int maior, menor;
    int primeiroNumero = 1; // Flag para indicar o primeiro número

    printf("Digite uma sequência de números inteiros positivos (insira um número negativo para encerrar):\n");

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        // Verifica se o número é negativo para encerrar o loop
        if (numero < 0) {
            break;
        }

        if (primeiroNumero) {
            maior = menor = numero;
            primeiroNumero = 0;
        } else {
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }
    }

    if (!primeiroNumero) {
        printf("O maior número da sequência é: %d\n", maior);
        printf("O menor número da sequência é: %d\n", menor);
    } else {
        printf("Nenhum número positivo foi inserido.\n");
    }

    return 0;
}
