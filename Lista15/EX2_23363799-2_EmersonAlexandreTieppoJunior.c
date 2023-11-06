#include <stdio.h>

int retornaSoma(parametroA, parametroB){
    int soma;
    soma = parametroA + parametroB;
    return soma;
}

int main(){
    int soma; 
    int parametroA = 2;
    int parametroB = 1;

    soma = retornaSoma(parametroA, parametroB);
    printf("%i", soma);
}