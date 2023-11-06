#include <stdio.h>

int main(){
    int y = 0;

    for(int x = 0; x < 5; x++){
        y += 2;
        printf(" %i : %i |", x, y);
    }
}