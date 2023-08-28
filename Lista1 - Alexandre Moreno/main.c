// Linguagem    :  C
// Professor    :  Alexandre Moreno
// Disciplina   :  Algoritmo e lógica de programação
// Autor        :  Emerson A. Tieppo Junior
// Objetivo     :  Bolo de cenoura


// Combinamos de o arquivo ser enviado sem o executável por ser macOS, e escrito na linguagem C ao invés de visualg
// Caso o arquivo contenha blocos de código comentados ainda está em desenvolvimento


#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {


char nome[20];
int idade;

// 1) Solicitar o nome e a idade de uma pessoa e informar ao usuário se ela já pode ou não tirar CNH
printf("Digite seu nome: \n");
scanf("%s", &nome);
printf("Digite sua idade: \n");
scanf("%i", &idade);

if (idade < 18) {
    printf("%s você ainda é menor de idade, não pode tirar a CNH.\n", nome);
}

else {
    printf("%s você já é maior de idade, pode tirar a CNH\n", nome);
}
// FIm 1)


// 2) Solicite um valor e apresente as mensagens: “Valor positivo”, “Valor negativo” ou “Zero”
int valor;
printf("Digite um numero inteiro: \n");
scanf("%i", &valor);

if (valor > 0) {
    printf("O valor %i é positivo\n", valor);
}

else if (valor < 0) {
    printf("O valor %i é negativo\n", valor);
}

else if (valor == 0) {
    printf("O valor é %i\n", valor);
}

else {
    printf("O valor não é inteiro\n");
}
// Fim 2)


// 3) Solicite dois valores (supostamente distintos) e apresente qual é o maior valor
float valorUm;
float valorDois;

printf("Digite um valor a ser comparado: \n");
scanf("%f", &valorUm);
printf("Digite um segundo valor a ser comparado\n");
scanf("%f", &valorDois);

if (valorUm > valorDois) {
    printf("%.2f é maior que %.2f\n", valorUm, valorDois);
}

else {
    printf("%.2f é maior que %.2f\n", valorDois, valorUm);
}
// FIm 3)


// 4) Solicite dois valores e apresente o maior e o menor elemento. Caso sejam iguais, informe ao usuário
printf("Digite um valor a ser comparado: \n");
scanf("%f", &valorUm);
printf("Digite um segundo valor a ser comparado\n");
scanf("%f", &valorDois);

if (valorUm > valorDois) {
    printf("%.2f é maior que %.2f\n", valorUm, valorDois);
}

else if (valorUm == valorDois) {
    printf("Os valores são iguais\n");
}


else {
    printf("%.2f é maior que %.2f\n", valorDois, valorUm);
}
// Fim 4)


// 5) Solicite o nome, a idade e o salário de uma pessoa. Calcule e apresente o novo salário, de acordo com os critérios abaixo
// Idade até 35 anos, aumento de 12%
// Idade entre 36 e 50 anos, aumento de 14,5%
// Idade superior a 50 anos, aumento de 17%
float salario;
float aumento;
float salarioAtual;

printf("Digite seu nome: \n");
scanf("%s", &nome);
printf("Digite sua idade: \n");
scanf("%i", &idade);
printf("Digite seu salario: \n");
scanf("%f", &salario);

if (idade <= 35) {
    aumento = salario * 0.12;
}

else if (idade > 50) {
    aumento = salario * 0.175;
}

else {
    aumento = salario * 0.145;
}

salarioAtual = salario + aumento;
printf("%s por ter %i anos seu aumento é de R$: %.2f, correspondendo a R$: %.2f no total\n", nome, idade, aumento, salarioAtual);
// Fim 5)


// 6) Solicite ao usuário 3 números (supostamente distintos). No final, apresente o maior deles.
int contador = 0;
int maior = 0;
int num;

while (contador < 3) {
    printf("Digite um numero inteiro: ");
    scanf("%i", &num);

    if (num > maior) {
        maior = num;
    }
    contador ++;
}
printf("O maior numero é %i\n", maior);
// Fim 6)


// 7) Solicite ao usuário 3 números (supostamente distintos). No final, apresente o maior e o menor deles.
int menor = 0;

while (contador < 3) {
    printf("Digite um numero inteiro: ");
    scanf("%i", &num);

    if (num > maior) {
        maior = num;
    }
    contador ++;
    
    if (num < menor) {
        menor = num;
    }
    contador ++;
}
printf("O maior numero é %i e o menor é %i\n", maior, menor);
// Fim 7)


// 8) Levando em consideração que a nota mínima de aprovação é 6,0 e a frequência mínima seja de 75%, solicite ao
// usuário 2 notas e calcule a média. Solicite também qual é a carga horária (número de aulas) da disciplina e também
// solicite a quantidade de presenças que o aluno teve (em número de aulas). No fim, apresente se o aluno está
// APROVADO ou REPROVADO.
float notaUm;
float notaDois;
float media; 
int aulas;
int presenca;
int faltas;

printf("Digite sua primeira nota: ");
scanf("%f", &notaUm);
printf("Digite a segunda nota: ");
scanf("%f", &notaDois);
printf("Digite o numero de aulas totais: ");
scanf("%i", &aulas);
printf("Digite o numero de presenças: ");
scanf("%i", &presenca);

media = ((notaUm + notaDois) / 2);
faltas = aulas - presenca;
if (media < 6 || (presenca / aulas) <= 0.25) {
    if (media < 6) {
        printf("Reprovado por média: %.2f", media);
    }

    else {
        printf("Reprovado por frequência %i faltas", (faltas));
    }
}

else {
    printf("Aprovado");
}
// Fim 8)


// 9) Solicite ao usuário um número entre 10 e 45 e apresente ao usuário número VÁLIDO ou número INVÁLIDO.
while (num < 10 || num > 45) {
    printf("\nDigite um numero entre 10 e 45: ");
    scanf("%i", &num);


    if (num < 10 || num > 45) {
        printf("Número inválido");
    }

    else {
        printf("Numero valido");
    }
}


// 10) Solicite o mês (em número) para o usuário e apresente a descrição do mesmo (Ex. “janeiro”, “fevereiro”, etc).
int mes;

printf("\nQual o mês: ");
scanf("%i", &mes);

switch (mes) {
case 1:
    printf("Janeiro");
    break;

case 2:
    printf("Fevereiro");
    break;

case 3:
    printf("Março");
    break;

case 4:
    printf("Abril");
    break;

case 5:
    printf("Maio");
    break;

case 6:
    printf("Junho");
    break;

case 7:
    printf("Julho");
    break;

case 8:
    printf("Agosto");
    break;

case 9:
    printf("Setembro");
    break;

case 10:
    printf("Outubro");
    break;
    
case 11:
    printf("Novembro");
    break;

case 12:
    printf("Dezembro");

default:
    break;
}
// Fim 10)


// 11) Solicite o ano qualquer no formato de 4 dígitos, e apresente ao usuário se o ano é ou não Bissexto.
int ano = 0;

while (ano < 1000) {
    printf("\nDigite o ano para dizer se é bissexto: \n");
    scanf("%i", &ano);    
}

if (ano %4 == 0) {
    printf("O ano de %i é bissexto", ano);
}

else {
    printf("O ano de %i não é bisexto", ano);
}
// Fim 11)


// 12) Solicite um número qualquer e informe ao usuário se o mesmo é “PAR” ou se é “IMPAR”
int parimpar;

printf("\nDigite um numero para saber se é par ou impar: \n", parimpar); 
scanf("%i", &parimpar);

if (parimpar % 2 == 0) {
    printf("%i, é par", parimpar);
}

else {
    printf("%i é impar", parimpar);
}
// Fim 12)


// 13) Solicite dois nomes e apresente qual nome é maior (segundo a ordem alfabética)
char nome1[100], nome2[100];
printf("Digite o primeiro nome: ");
scanf("%s", nome1);
    
printf("Digite o segundo nome: ");
scanf("%s", nome2);
    
if (strcmp(nome1, nome2) > 0) {
    char temp[100];
    strcpy(temp, nome1);
    strcpy(nome1, nome2);
    strcpy(nome2, temp);
}
    
printf("Nomes em ordem alfabética: %s, %s\n", nome1, nome2);
// Fim 13)


// 14) Solicite três nomes e apresente qual nome é maior (segundo a ordem alfabética)
char nomes[3][100]; 

for (int i = 0; i < 3; i++) {
    printf("Digite o nome %d: ", i + 1);
    scanf("%s", nomes[i]);
}

for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (strcmp(nomes[j], nomes[j + 1]) > 0) {
                char temp[100];
                strcpy(temp, nomes[j]);
                strcpy(nomes[j], nomes[j + 1]);
                strcpy(nomes[j + 1], temp);
            }
        }
    }

printf("Nomes em ordem alfabética: %s, %s, %s\n", nomes[0], nomes[1], nomes[2]);
printf("O maior é %s\n", nomes[0]);
// Fim 14)


// 15) Solicite três nomes e apresente qual nome é maior e qual é menor (segundo a ordem alfabética)
for (int i = 0; i < 3; i++) {
    printf("Digite o nome %d: ", i + 1);
    scanf("%s", nomes[i]);
}

for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (strcmp(nomes[j], nomes[j + 1]) > 0) {
                char temp[100];
                strcpy(temp, nomes[j]);
                strcpy(nomes[j], nomes[j + 1]);
                strcpy(nomes[j + 1], temp);
            }
        }
    }

printf("Nomes em ordem alfabética: %s, %s, %s\n", nomes[0], nomes[1], nomes[2]);
printf("O maior é %s e o menor é %s", nomes[0], nomes[2]);
// Fim 15)


// 16) Solicite os valores da pressão arterial de uma pessoa (com 18 anos ou mais) e apresente sua situação de acordo com a tabela (visualizar a tabela)
int pad, pas, classificacao;

printf("Digite sua idade: ");
scanf("%i", &idade);


if (idade < 18) {
    printf("Você precisa ser maior de idade para utilizar o programa.");
}

else {
    printf("Digite a pressão arterial diastólica: ");
    scanf("%i", &pad);
    printf("Digite a pressão arterial sistólica: ");
    scanf("%i", &pas);    
    
    if (pad < 85 && pas < 130) {
        classificacao = 1;
    }

    else {
        if (pad < 110 && pas < 180) {
            if (pad < 100 && pas < 160)
            {
                if (pad < 90 && pas < 140)
                {
                    if (pad <= 85 && pas <= 130) {
                        classificacao = 2;
                    }
                }
                
                else {
                    if (pas < 140) {
                        classificacao = 3;
                    }
                    
                    else {
                        classificacao = 6;
                    }
                }
            }
            
            else {
                classificacao = 4;
            }
        }
        
        else {
            classificacao = 5;
        }
    }
}


switch (classificacao) {
case 1:
    printf("A pressão arterial está normal");
    break;

case 2:
    printf("A pressão arterial está normal limitrofe)");
    break;

case 3:
    printf("Estado de hipertensão leve (estagio 1)");
    break;

case 4:
    printf("Estado de hipertensão moderada (estagio 2)");
    break;

case 5:
    printf("Estado de hipertensão grave (estagio 3)");
    break;

case 6:
    printf("Estado de hipertensão sistólica isolada");
    break;

default:
    break;
}
// Fim 16)


// 17) Solicite ao usuário o nome, idade, sexo e salário de 3 pessoas e posteriormente apresente se Homens ganham
// mais, se Mulheres ganham Mais ou se é impossível determinar de acordo com os dados informados.



// Fim 17

// 18) Solicite o nome e o tipo sanguíneo de uma pessoa. Posteriormente, apresente para quais tipos ela pode doar e de
// quais tipos sanguíneos ela pode receber sangue.


// 19) Solicite dois valores (A) e (B) supostamente distintos. Posteriormente, apresente a subtração e o produto do maior
// pelo menor.


// 20) Solicite 3 valores dos três lados de um triângulo e posteriormente apresente ao usuário se os dados referem-se a
// um triângulo equilátero, isósceles ou escaleno.

}