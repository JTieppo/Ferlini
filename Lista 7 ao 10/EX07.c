// Aluno      :  Emerson Alexandre Tieppo Junior
// RA         :  23363799-2
// Professor  :  Ferlini

#include <stdio.h>

int main() {
    float valor;
    int opcao = 0;

    while (opcao != 3)
    {

        printf("Digite o valor a ser convertido: \n");
        scanf("%f", &valor);
        printf("1 - ceucius para fahrenheit\n");
        printf("2 - fahrenheit para celsius\n");
        printf("3 - para sair\n");
        printf("Digite o número da opção desejada: ");
        scanf("%i", &opcao);

        while (opcao == 1)
        {
            printf("%.2fº celcius em fahrenheit é igual a %.2f\n", valor, (valor * 1.8 + 32));
            break;
        }
        
        while (opcao == 2)
        {
            printf("%.2fº fahrenheit em celcius é igual a %.2f\n", valor, ((valor - 32) /1.8));
            break;
        }

    }
    return 0;
}