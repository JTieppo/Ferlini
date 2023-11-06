#include <stdio.h>

float retornaArea(float comp, float larg){
    float area = comp * larg;
    return area;
}

int main(){
    float comp = 1;
    float larg = 2;
    float area;

    area = retornaArea(comp, larg);
    printf("A area: %.2f\n", area);
    return 0;
}
