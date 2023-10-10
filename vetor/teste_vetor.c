#include <stdio.h>



int main() {
    int numero[20];

    for (int x = 0; x < 15; x++)
    {
        scanf("%i", &numero);
    }

    for (int y = 0; y < 15; y++) {
        printf("%i\n", numero[y]);
    }
}
