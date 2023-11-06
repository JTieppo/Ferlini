#include <stdio.h>

float intervalo(inicio, fim){
    float soma = 0;
    for(float x = inicio; x < fim+1; x++){
        soma += x;
    }
    return soma;
}

int main(){
    float inicio = 1;
    float fim = 5;
    printf("A soma: %.2f", intervalo(inicio, fim));
}