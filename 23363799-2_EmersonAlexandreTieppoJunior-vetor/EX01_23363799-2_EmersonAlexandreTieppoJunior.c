#include <stdio.h>



int main() {
    int numero[10];

    for(int x = 0; x < 10; x++)
    {
        printf("Digite o numero da posicao x: ");
        scanf("%i", &numero[x]);
    }

    for(int x = 0; x < 10; x++) {
        printf("%i\n", numero[x]);
    }
}
