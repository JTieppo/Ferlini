#include <stdio.h>

double mediaHarmonica(int arr[], int tamanho) {
    double somaInversos = 0.0;
    
    for (int i = 0; i < tamanho; i++) {
        somaInversos += 1.0 / arr[i];
    }
    
    double media = tamanho / somaInversos;
    return media;
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    double media_harmonica = mediaHarmonica(numeros, tamanho);
    printf("Média Harmônica: %lf\n", media_harmonica);

    return 0;
}
