// Aluno      :  Emerson Alexandre Tieppo Junior
// RA         :  23363799-2
// Professor  :  Ferlini

#include <stdio.h>

int main() {
    int numero, i;
    int ehPrimo = 1; 

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        printf("O número não é primo.\n");
    } else {
        
        for (i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                ehPrimo = 0; 
                break; 
            }
        }

        if (ehPrimo == 1) {
            printf("%d é um número primo.\n", numero);
        } else {
            printf("%d não é um número primo.\n", numero);
        }
    }

    return 0;
}