#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char question[100];
    struct Node *yes;
    struct Node *no;
} Node;

Node* createNode(const char *question) {
    Node *node = (Node*)malloc(sizeof(Node));
    strcpy(node->question, question);
    node->yes = NULL;
    node->no = NULL;
    return node;
}

void play(Node *root) {
    char answer[10];
    
    if (root->yes == NULL && root->no == NULL) {
        printf("É um(a) %s? (sim/nao): ", root->question);
        scanf("%s", answer);
        
        if (strcmp(answer, "sim") == 0) {
            printf("Acertei! :)\n");
        } else {
            char newAnimal[100];
            printf("Qual animal você pensou? ");
            scanf(" %[^\n]", newAnimal);
            
            char newQuestion[100];
            printf("Me diga uma pergunta que distinga %s de %s: ", newAnimal, root->question);
            scanf(" %[^\n]", newQuestion);
            
            char oldAnimal[100];
            strcpy(oldAnimal, root->question);
            
            strcpy(root->question, newQuestion);
            root->yes = createNode(newAnimal);
            root->no = createNode(oldAnimal);
        }
    } else {
        printf("%s (sim/nao): ", root->question);
        scanf("%s", answer);
        
        if (strcmp(answer, "sim") == 0) {
            play(root->yes);
        } else {
            play(root->no);
        }
    }
}

int main() {
    Node *root = createNode("vive na água?");
    root->yes = createNode("tubarão");
    root->no = createNode("gato");

    printf("Bem-vindo ao Adivinhe o Animal!\n");
    printf("Pense em um animal e eu vou tentar adivinhar qual é.\n");
    
    do {
        play(root);
        
        char playAgain[10];
        printf("Quer jogar de novo? (sim/nao): ");
        scanf("%s", playAgain);
        
        if (strcmp(playAgain, "nao") == 0) {
            break;
        }
    } while (1);

    return 0;
}