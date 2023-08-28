// Linguagem    :  C
// Professor    :  João Ferlini
// Disciplina   :  Linguagem e técnica de programação
// Autor        :  Emerson A. Tieppo Junior


#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Inicio 1)
    printf("\n----------------------- Inicio leitura de inteiro ----------------------\n");
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%i", &num);

    printf("O numero digitado é %i", num);
    printf("\n----------------------- Fim leitura de inteiro ----------------------\n");
    // Fim 1)


    // Inicio 2)
    printf("\n----------------------- Inicio soma ----------------------\n");
    int numUm;
    int numDois;

    printf("Digite um numero inteiro para a soma: ");
    scanf("%i", &numUm);
    printf("Digite um segundo numero inteiro para a soma: ");
    scanf("%i", &numDois);

    int soma = numUm + numDois;

    printf("A soma dos numero é igual a %i", soma);
    printf("\n----------------------- Fim soma ----------------------\n");
    // Fim 2)


    // Inicio 3)
    printf("\n----------------------- Inicio calculo de area ----------------------\n");
    float raio;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    float area = ((raio * raio) * 3.1416);

    printf("Considerando pi = 3,1416, a area da circunferência é %.2f", area);
    printf("\n----------------------- Fim calculo de area ----------------------\n");
    // Fim 3)


    // Inicio 4)
    printf("\n----------------------- Inicio conversor de temperatura ----------------------\n");
    float celsius;

    printf("Digite a temperatura em Cº: ");
    scanf("%f", &celsius);

    float fahrenheit = ((celsius * 9/5) + 32);

    printf("%.2fº celsius é equivalente a %.2f fahrenheits", celsius, fahrenheit);
    printf("\n----------------------- Fim conversor de temperatura ----------------------\n");
    // Fim 4)


    // Inicio 5)
    printf("\n----------------------- Inicio positivo, negativo, 0 ----------------------\n");
    int numTres;

    printf("Digite um número inteiro: ");
    scanf("%i", &numTres);

    if (numTres > 0) {
        printf("O numero %i é positivo.", numTres);
    }
    
    else if (numTres < 0) {
        printf("O numero %i é negativo", numTres);
    }
    
    else if (numTres == 0) {
        printf("O numero é igual a 0");
    }
    printf("\n----------------------- Fim positivo, negativo, 0 ----------------------\n");
    // Fim 5)


    // Inicio 6)
    char nomeoperacao[20], simbolo = ' ';
    int escolha;
    float numQuatro, numCinco, intermediaria;

    printf("\n-------------------------- Operação matemática ----------------------------");
    printf("\n 1- soma \n 2- subtração \n 3- multiplicação \n 4- Divisão\n");
    printf("Opção desejada: ");
    scanf("%i", &escolha);

    printf("\nDigite um número para operação: ");
    scanf("%f", &numQuatro);
    printf("\nDigite um segundo número para operação: ");
    scanf("%f", &numCinco);

    if (escolha == 1) {
        intermediaria = (numQuatro + numCinco);
        simbolo = '+';
        strcpy(nomeoperacao, "soma");
    }

    else if (escolha == 2) {
        intermediaria = (numQuatro - numCinco);
        simbolo = '-';
        strcpy(nomeoperacao, "subtração");
    }
    
    else if (escolha == 3) {
        intermediaria = (numQuatro * numCinco);
        simbolo = '*';
        strcpy(nomeoperacao, "multiplicação");    
    }

    else if (escolha == 4) {
        intermediaria = (numQuatro / numCinco);
        simbolo = '/';
        strcpy(nomeoperacao, "divisão");    
    }

    else {
        intermediaria = (0);
        simbolo = ' ';
        strcpy(nomeoperacao, "erro");
    }
    
    
    printf("O simbolo da operação é %c e a %s entre %.2f e %.2f é igual a %.2f", simbolo, nomeoperacao, numQuatro, numCinco, intermediaria);
    printf("\n------------------------- Fim operação matemática -----------------------------");
    // Fim 6)


    // Inicio 7)
    printf("\n----------------------- Inicio pares de 0 a 100 ----------------------\n");
    int contador = 0;

    while (contador <= 100) {
        if (contador % 2 == 0) {
            printf("%i\n", contador);
            contador ++;
        }

        else {
            contador ++;
        }
    }
    printf("\n----------------------- Fim pares de 0 a 100 ----------------------\n");
    // Fim 7)


    // Inicio 8)
    printf("\n--------------------- Inicio fatorial ----------------------\n");
    int numero;
    
    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &numero);
    
    int fatorial = 1;
    
    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }
    
    printf("O fatorial de %d é: %d\n", numero, fatorial);
    
    return 0;
    printf("\n----------------------- Fim fatorial ------------------------\n");
    // Fim 8)


    // Inicio 9)
    printf("\n--------------------- Inicio maior número ----------------------\n");
    int numeroSeis, maior = 0;
    char continuar;

    do {
        printf("Digite um número inteiro: ");
        scanf("%hd", &numeroSeis);

        if (numeroSeis > maior) {
            maior = numeroSeis;
        }

        printf("Quer continuar? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("O maior número digitado foi: %d\n", maior);

    return 0;
    printf("\n----------------------- Fim maior número ------------------------\n");
    // Fim 9)


    // Inicio 10)
    printf("\n------------------- Inicio sequência fibonacci -----------------------\n");
    int termos = 10;
    int primeiroTermo = 0, segundoTermo = 1;

    printf("Série de Fibonacci até o décimo termo:\n");

    for (int i = 1; i <= termos; i++) {
        printf("%d ", primeiroTermo);
        int proximoTermo = primeiroTermo + segundoTermo;
        primeiroTermo = segundoTermo;
        segundoTermo = proximoTermo;
    }

    printf("\n");

    return 0;
    printf("\n--------------------- Fim sequência fibonacci --------------------------\n");
    // Fim 10)
}
