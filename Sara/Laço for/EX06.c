#include <stdio.h>

int main() {
    int numAlunos;
    float altura, somaAlturas = 0;

    printf("Digite o número de alunos na turma: ");
    scanf("%d", &numAlunos);

    for (int i = 1; i <= numAlunos; i++) {
        printf("Digite a altura do aluno %d (em metros): ", i);
        scanf("%f", &altura);
        somaAlturas += altura;
    }

    float mediaAlturas = somaAlturas / numAlunos;
    printf("A média de altura da turma é %.2f metros.\n", mediaAlturas);

    return 0;
}
