#include<stdio.h>

int main(){
    int soma = 1;

    for( int num; num<100; soma += num){
        num ++;
    }
    printf("%i\n", soma);
}