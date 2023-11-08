#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO 256

struct Node {
    char caractere;
    int frequencia;
    struct Node *esquerda, *direita;
};

struct Node *novoNo(char caractere, int frequencia) {
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->caractere = caractere;
    n->frequencia = frequencia;
    n->esquerda = n->direita = NULL;
    return n;
}

void imprimeCodigos(struct Node *raiz, int array[], int topo) {
    if (raiz->esquerda) {
        array[topo] = 0;
        imprimeCodigos(raiz->esquerda, array, topo + 1);
    }

    if (raiz->direita) {
        array[topo] = 1;
        imprimeCodigos(raiz->direita, array, topo + 1);
    }

    if (!(raiz->esquerda) && !(raiz->direita)) {
        printf("%c: ", raiz->caractere);
        for (int i = 0; i < topo; i++) {
            printf("%d", array[i]);
        }
        printf("\n");
    }
}

void construirArvoreHuffman(char caracteres[], int frequencias[], int tamanho) {
    struct Node *esquerda, *direita, *topo;
    struct Node *fila[TAMANHO];
    int front = 0, rear = 0;

    for (int i = 0; i < tamanho; i++) {
        fila[i] = novoNo(caracteres[i], frequencias[i]);
        rear++;
    }

    while (rear - front > 1) {
        esquerda = fila[front];
        direita = fila[front + 1];

        topo = novoNo('$', esquerda->frequencia + direita->frequencia);
        topo->esquerda = esquerda;
        topo->direita = direita;

        front += 2;
        fila[rear] = topo;
        rear++;
    }

    int array[TAMANHO], topo = 0;
    printf("Códigos Huffman:\n");
    imprimeCodigos(fila[0], array, topo);
}

int main() {
    char caracteres[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    int frequencias[] = { 5, 9, 12, 13, 16, 45 };
    int tamanho = sizeof(caracteres) / sizeof(caracteres[0]);

    construirArvoreHuffman(caracteres, frequencias, tamanho);

    return 0;
}
