#include <stdio.h>

int mdc(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1 = 24;
    int num2 = 36;
    int resultado = mdc(num1, num2);
    printf("O MDC de %d e %d é: %d\n", num1, num2, resultado);
    return 0;
}
