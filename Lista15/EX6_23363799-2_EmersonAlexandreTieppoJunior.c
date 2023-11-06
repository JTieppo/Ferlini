#include <stdio.h>

int fatorial(num){
    int resultado = 1;
    for(int x = 1; x < num+1; x++){
        resultado = resultado * x;
    }
    return resultado;
}

int main(){
    int num = 4;

    printf("O fatorial do numero: %i", fatorial(num));
}