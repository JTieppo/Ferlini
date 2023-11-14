#include <stdio.h>

int euclidesEstendido(int a, int b, int *x, int *y) {
    if (b == 0) {
        *x = 1;
        *y = 0;
        return a;
    }

    int x1, y1;
    int mdc = euclidesEstendido(b, a % b, &x1, &y1);

    *x = y1;
    *y = x1 - (a / b) * y1;

    return mdc;
}

int main() {
    int a = 48;
    int b = 18;
    int x, y;

    int mdc = euclidesEstendido(a, b, &x, &y);

    printf("MDC de %d e %d é: %d\n", a, b, mdc);
    printf("Coeficientes de Bézout (x e y) são: %d e %d\n", x, y);

    return 0;
}
