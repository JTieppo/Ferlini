#include <stdio.h>

int main(){
    int matriz[3][3];

    for(int x = 0; x < 3; x++){
        for (int y = 0; y < 3; y++)
        {
            printf("Digite um valor inteiro: ");
            scanf("%i", &matriz[x][y]);
        }
    }

    for(int x = 0; x < 3; x++){
        for (int y = 0; y < 3; y++)
        {
            printf("%i\n", matriz[x][y]);
        }
    }
}