// Linguagem    :  C
// Professor    :  João Ferlini
// Disciplina   :  Linguagem e técnica de programação
// Autor        :  Emerson A. Tieppo Junior
// Objetivo     :  

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int etaria, idade;

    printf("Digite a idade: ");
    scanf("%i", &idade);

    if (idade < 12) {
        etaria = 1;
    } else if (idade > 12 && idade < 18) {
        etaria = 2;
    } else if (idade > 18 && idade < 60) {
        etaria = 3;
    } else if (idade > 60) {
        etaria = 4;
    }
    
    

    switch (etaria) {
    case 1:
        printf("A faixa etária é correspondente a: Criança");
        break;
    
    case 2:
        printf("A faixa etária é correspondente a: Adolescente");
        break;

    case 3:
        printf("A faixa etária é correspondente a: Adulto");
        break;

    case 4:
        printf("A faixa etária é correspondente a: Idoso");
        break;

    default:
        printf("erro");
        break;
    }
}