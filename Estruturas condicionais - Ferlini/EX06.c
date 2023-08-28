// Linguagem    :  C
// Professor    :  João Ferlini
// Disciplina   :  Linguagem e técnica de programação
// Autor        :  Emerson A. Tieppo Junior
// Objetivo     : 

#include <stdio.h>

int main() {
    int escolha;
    float numUm, numDois;

    printf("1- Soma");
    printf("\n2- Subtração");
    printf("\n3- Multiplicação");
    printf("\n4- Divisão");
    printf("\nDigite o número da escolha: ");
    scanf("%i", &escolha);

    printf("\nDigite o primeiro número: ");
    scanf("%f", &numUm);
    printf("\nDigite o segundo número: ");
    scanf("%f", &numDois);

    switch (escolha) {
        case 1:
            printf("A soma entre os números é %.2f", (numUm + numDois));
            break;
        
        case 2:
            printf("A subtração entre os números é %.2f", (numUm - numDois));
            break;

        case 3:
            printf("A multiplicação entre os números é %.2f", (numUm * numDois)); 
            break;

        case 4:
            printf("A divisão entre os números é %.2f", (numUm / numDois));
            break;

        default:
            break;
    }
}