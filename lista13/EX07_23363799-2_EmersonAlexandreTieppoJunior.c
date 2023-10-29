#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portugese");
    int vetor[10];
    int busca;
    int contador = 0;

    for(int x = 0; x < 10; x++){
        printf("Digite o numero: ");
        scanf("%i", &vetor[x]);
    }

    printf("Qual o numero quer saber se exist no vetor: ");
    scanf("%i", &busca);

    for(int x = 0; x < 10; x++){
        if (busca == vetor[x]){
            contador ++;
        }
    }
    printf("O numero %i aparece %i vez(es) no vetor", busca, contador);
}