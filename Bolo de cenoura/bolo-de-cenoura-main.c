// Linguagem    :  C
// Professor    :  João Ferlini
// Disciplina   :  Linguagem e técnica de programação
// Autor        :  Emerson A. Tieppo Junior
// Objetivo     :  Bolo de cenoura

#include <stdio.h>
#include <locale.h>

int main() {
// Pacotes
int pacOleo = 1000;            //  litros
int pacCenoura = 1000;         //  g
int pacOvos = 12;              //  Unidade
int pacAcucar = 1000;  //  g
int pacFarinha = 1000;         //  g
int pacFermento = 50;          //  g
int pacChocolate = 200;        //  g
int pacManteiga = 500;         //  g

// Usado para o bolo
float usaAcucar = 160;         //  1 xícara de açúcar = 160g
float usaOleo = 240;           //  1 xícara de óleo de soja = 240ml 
float usaFarinha = 120;        //  1 xícara de farinha = 120g
float usaManteiga = 12;        //  1 colher de sopa de manteiga = 12g
float usaFermento = 10;        //  1 colher de chá de fermento em pó = 10 g
float usaCenoura = 7;          //  7 cenouras médias (aprox) = 1k
float usaChocolate = 6;        //  1 colher de sopa de chocolate em pó = 6g
int usaOvos;                   //  x Ovos 

// Entrada de preços
float precoOleo;
float precoCenoura;
float precoOvos;
float precoAcucar;
float precoFarinha;
float precoFermento;
float precoChocolate;
float precoManteiga;

printf("\n---------------- Calculadora de preços ----------------\n\n");
printf("Primeiro digite a quantidade de ovos que utiliza em seu bolo: ");
scanf("%i", &usaOvos);          // Não foi dada a quantidade na tabela por isso a utilização 

printf("\nDigite o valor pago no óleo: ");
scanf("%f", &precoOleo);
printf("\nDigite o valor pago na cenoura: ");
scanf("%f", &precoCenoura);
printf("\nDigite o valor pago nos ovos: ");
scanf("%f", &precoOvos);
printf("\nDigite o valor pago no açúcar: ");
scanf("%f", &precoAcucar);
printf("\nDigite o valor pago na farinha: ");
scanf("%f", &precoFarinha);
printf("\nDigite o valor pago no fermento: ");
scanf("%f", &precoFermento);
printf("\nDigite o valor pago no chocolate: ");
scanf("%f", &precoChocolate);
printf("\nDigite o valor pago na manteiga: ");
scanf("%f", &precoManteiga);


// calculo por bolo
float valorOleo = ((usaOleo * precoOleo) / pacOleo);
float valorCenoura = ((usaCenoura * precoCenoura) / pacCenoura);
float valorOvos = ((usaOvos * precoOvos) / pacOvos);
float valorAcucar = ((usaAcucar * precoAcucar) / pacAcucar);
float valorFarinha = ((usaFarinha * precoFarinha) / pacFarinha);
float valorFermento = ((usaFermento * precoFermento) / pacFermento);
float valorChocolate = ((usaChocolate * precoChocolate) / pacChocolate);
float valorManteiga = ((usaManteiga * precoManteiga) / pacManteiga);

float valorTotal = (valorOleo + valorCenoura + valorOvos + valorAcucar + valorFarinha + valorFermento + valorChocolate + valorManteiga);

// Display de resultados
printf("O preço total por bolo é: %.2f\n", valorTotal);

printf("O preço do óleo por bolo é: %.2f\n", valorOleo);
printf("O preço das cenouras por bolo é: %.2f\n", valorCenoura);
printf("O preço dos ovos por bolo é: %.2f\n", valorOvos);
printf("O preço do açúcar por bolo é: %.2f\n", valorAcucar);
printf("O preço da farinha por bolo é: %.2f\n", valorFarinha);
printf("O preço do fermento por bolo é: %.2f\n", valorFermento);
printf("O preço do chocolate por bolo é: %.2f\n", valorChocolate);
printf("O preço da manteiga por bolo é: %.2f\n", valorManteiga);


// adicionar controle de segunda versão
}
