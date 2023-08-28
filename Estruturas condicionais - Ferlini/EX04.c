// Linguagem    :  C
// Professor    :  João Ferlini
// Disciplina   :  Linguagem e técnica de programação
// Autor        :  Emerson A. Tieppo Junior
// Objetivo     :  

#include <stdio.h>
#include <locale.h>

int main() {
    int num;

    printf("Digite o número: ");
    scanf("%i", &num);


    switch (num % 2)
    {
    case 0:
        printf("O número %i é par", num);
        break;
    
    case 1:
        printf("O número %i é impar", num);
        break;

    default:
        break;
    }
}