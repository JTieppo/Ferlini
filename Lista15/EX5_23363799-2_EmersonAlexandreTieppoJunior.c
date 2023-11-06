#include <stdio.h>

int parOuImpar(num){
    if (num % 2 == 0){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int num = 2;
    int result;
    result = parOuImpar(num);

    if (result == 1) {
        printf("numero par");
    }else{
        printf("numero impar");
    }
}