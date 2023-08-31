#include <stdio.h>

int main() {
    int cont = 0;
    float num, media=0;

    do {
        printf("Digite o numero: ");
        scanf("%f", &num);
        media += num;
        cont ++;
    } while (cont < 5); 

    printf("A media entre os numeros é %.2f", (media/5));
}