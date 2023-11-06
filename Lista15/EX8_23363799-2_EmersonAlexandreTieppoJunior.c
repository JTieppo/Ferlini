#include <stdio.h>
#include <math.h>

float raiz(num){
    float calc = sqrt(num);
    return calc;
}

int main(){
    int num = 16;

    printf("A raiz: %.2f", raiz(num));
}