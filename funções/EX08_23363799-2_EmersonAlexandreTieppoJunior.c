#include <stdio.h>
#include <math.h>

double raizQuadrada(double num, double precisao) {
    double estimativa = num / 2.0; // Estimativa inicial
    double diferenca;

    do {
        estimativa = 0.5 * (estimativa + num / estimativa); // Fórmula do método de Newton-Raphson para a raiz quadrada
        diferenca = fabs(num - estimativa * estimativa);
    } while (diferenca > precisao);

    return estimativa;
}

int main() {
    double numero = 25.0; // Número para calcular a raiz quadrada
    double precisao = 0.0001; // Precisão desejada

    double resultado = raizQuadrada(numero, precisao);
    printf("A raiz quadrada de %.2f é aproximadamente: %.5f\n", numero, resultado);

    return 0;
}
