#include <stdio.h>

float convert(celc){
    float calc = (celc * 1.8) + 32;
    return calc;
}

int main(){
    float celc = 0;
    printf("Em fahrenheit: %.2f", convert(celc));
}