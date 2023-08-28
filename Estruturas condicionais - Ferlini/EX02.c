// Linguagem    :  C
// Professor    :  João Ferlini
// Disciplina   :  Linguagem e técnica de programação
// Autor        :  Emerson A. Tieppo Junior
// Objetivo     :  

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float inicial, final;
    int opcao;

    printf("Digite o valor inicial a ser convertido: ");
    scanf("%f", &inicial);
    printf("1- celsius");
    printf("2- Fahrenheit");
    printf("selecione a opção de conversão (1 ou 2): ");
    scanf("%i", &opcao);

    switch (opcao)
    {
    case 1:
        printf("%.2f celsius é igual a %.2f fahrenheit", inicial, ((inicial * 9/5) + 32));
        break;
    
    case 2:
        printf("%.2f fahrenheit é igual a %.2f celsius", inicial, ((inicial - 32) / 1,8));
        break;

    default:
        break;
    }
}