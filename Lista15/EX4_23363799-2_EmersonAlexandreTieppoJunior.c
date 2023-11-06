#include <stdio.h>

int retornaMaior(numUm, numDois){
    int maior;
    if (numUm > numDois){
            maior = numUm;
    } else {
            maior = numDois;
    }
    return maior;
}

int main(){
    int numUm = 1;
    int numDois = 2;

    printf("O maior: %i", retornaMaior(numUm, numDois));
}