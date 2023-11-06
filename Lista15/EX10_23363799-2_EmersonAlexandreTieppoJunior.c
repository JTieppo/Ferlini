#include <stdio.h>

float convert(raio){
    float calc = (4 * 3.1415 * (raio * raio * raio))/3;
    return calc;
}

int main(){
    float raio = 2;
    printf("O volume da esfera: %.2f", convert(raio));
}
