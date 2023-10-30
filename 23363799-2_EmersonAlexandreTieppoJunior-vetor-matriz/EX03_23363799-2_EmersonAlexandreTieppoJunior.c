#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 5

int main() {
    char nomes[MAX_ALUNOS][50]; 
    int notas[MAX_ALUNOS]; 
    int total_notas = 0;
    int maior_nota = -1; 
    int menor_nota = 101;
    char nome_maior[50], nome_menor[50]; 
    float media = 0.0;

    
    for (int i = 0; i < MAX_ALUNOS; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", nomes[i]);
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%d", &notas[i]);

        total_notas += notas[i];

        if (notas[i] > maior_nota) {
            maior_nota = notas[i];
            strcpy(nome_maior, nomes[i]);
        }

        if (notas[i] < menor_nota) {
            menor_nota = notas[i];
            strcpy(nome_menor, nomes[i]);
        }
    }
    
    if (MAX_ALUNOS > 0) {
        media = (float)total_notas / MAX_ALUNOS;
    }

    printf("\nMédia de todas as notas: %.2f\n", media);
    printf("Maior nota: %d - Aluno: %s\n", maior_nota, nome_maior);
    printf("Menor nota: %d - Aluno: %s\n", menor_nota, nome_menor);

    return 0;
}
