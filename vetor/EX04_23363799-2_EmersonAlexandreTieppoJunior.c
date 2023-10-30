#include <stdio.h>
#include <stdbool.h>

int main(){
    int vetor[50];
    int quantidade;

    while (true) {
        printf("Digite quantos numeros ira digitar(acima de 15 e abaixo de 50): ");
        scanf("%i", &quantidade);
        if (quantidade > 14 && quantidade < 50) {
            return false;
        }
    }
        
    while (quantidade > 0) {
        printf("Digite o numero: ");
        quantidade --;
    }
}