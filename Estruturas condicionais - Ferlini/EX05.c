// Linguagem    :  C
// Professor    :  João Ferlini
// Disciplina   :  Linguagem e técnica de programação
// Autor        :  Emerson A. Tieppo Junior
// Objetivo     :  

#include <stdio.h>
#include <locale.h>

int main() {
    int dia;

    printf("Digite o número do dia: ");
    scanf("%i", &dia);
    
    switch (dia)
    {
    case 1:
        printf("Domingo");
        break;
    
    case 2:
        printf("Segunda");
        break;

    case 3:
        printf("Terça");
        break;

    case 4:
        printf("Quarta");
        break;

    case 5:
        printf("Quinta");
        break;
    
    case 6:
        printf("sexta");
        break;

    case 7:
        printf("Sábado");
        break;

    default:
        break;
    }
}