// Linguagem    :  C
// Professor    :  João Ferlini
// Disciplina   :  Linguagem e técnica de programação
// Autor        :  Emerson A. Tieppo Junior
// Objetivo     :  Caixa eletrônico

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float valor_para_saque;
    int processo, calculo, notas_sacar_cinquenta = 0, notas_sacar_vinte = 0, notas_sacar_dez = 0, notas_sacar_cinco = 0, notas_sacar_dois = 0;

    int total_notas_cinquenta = 20;
    int total_notas_vinte = 15;
    int total_notas_dez = 10;
    int total_notas_cinco = 10;
    int total_notas_dois = 5;

    float moedas_sacar = 0;

    printf("Digite o valor a ser sacado: ");
    scanf("%f", &valor_para_saque);

    float sacando = valor_para_saque;

    while (sacando > 0) {
        if (sacando >= 50) {
            processo = 2;
        } else if (sacando >= 20) {
            processo = 3;
        } else if (sacando >= 10) {
            processo = 4;
        } else if (sacando >= 5) {
            processo = 5;
        } else if (sacando >= 2) {
            processo = 6;
        } else {
            processo = 7;
            break;
        }

        switch (processo) {
            case 2:
                calculo = (total_notas_cinquenta > 0) ? 1 : 3;
                break;

            case 3:
                calculo = (total_notas_vinte > 0) ? 2 : 4;
                break;

            case 4:
                calculo = (total_notas_dez > 0) ? 3 : 5;
                break;

            case 5:
                calculo = (total_notas_cinco > 0) ? 4 : 6;
                break;

            case 6:
                calculo = (total_notas_dois > 0) ? 5 : 7;
                break;

            case 7:
                calculo = 6;
                break;

            default:
                break;
        }

        switch (calculo) {
            case 1:
                total_notas_cinquenta--;
                notas_sacar_cinquenta++;
                sacando -= 50;
                break;

            case 2:
                total_notas_vinte--;
                notas_sacar_vinte++;
                sacando -= 20;
                break;

            case 3:
                total_notas_dez--;
                notas_sacar_dez++;
                sacando -= 10;
                break;

            case 4:
                total_notas_cinco--;
                notas_sacar_cinco++;
                sacando -= 5;
                break;

            case 5:
                total_notas_dois--;
                notas_sacar_dois++;
                sacando -= 2;
                break;

            case 6:
                moedas_sacar = sacando;
                sacando = 0;
                break;

            default:
                break;
        }
    }

    printf("Serão sacadas %i nota(s) de 50\n", notas_sacar_cinquenta);
    printf("Serão sacadas %i nota(s) de 20\n", notas_sacar_vinte);
    printf("Serão sacadas %i nota(s) de 10\n", notas_sacar_dez);
    printf("Serão sacadas %i nota(s) de 5\n", notas_sacar_cinco);
    printf("Serão sacadas %i nota(s) de 2\n", notas_sacar_dois);
    printf("Serão sacados %.2f em moedas\n", moedas_sacar);

    return 0;
}
