#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NUM_LADOS_DADO 6

int rolarDado() {
    return rand() % NUM_LADOS_DADO + 1;
}


int simularLancamentoRecursivo(bool ladosAparecidos[]) {
    bool todosAparecidos = true;
    for (int i = 1; i <= NUM_LADOS_DADO; ++i) {
        if (!ladosAparecidos[i]) {
            todosAparecidos = false;
            break;
        }
    }

    if (todosAparecidos) {
        return 0;
    }


    int resultado = rolarDado();
    ladosAparecidos[resultado] = true;

    return 1 + simularLancamentoRecursivo(ladosAparecidos);
}

int main() {

    bool ladosAparecidos[NUM_LADOS_DADO + 1] = {false};
    int totalLancamentos = simularLancamentoRecursivo(ladosAparecidos);
    printf("Número total de lançamentos necessários: %d\n", totalLancamentos);
    return 0;
}
