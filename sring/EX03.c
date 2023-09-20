#include <stdio.h>
#include <string.h>
#include <locale.h>

void inverte(char *str, char *contrario) {
    char atual;
    int contador = strlen(str) -1;
    while (contador >= 0) {
        atual = str[contador];
        if (atual == ' ') {
            contador --;
        } else {
            strncat(contrario, &str[contador], 1);
            contador --;
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    char contrario[50] = "";
    char frase[50];

    printf("Digite uma frase para saber se é palindromo: ");
    scanf(" %s", frase);

    printf(" %s\n", frase);

    inverte(frase, contrario);
    if (strcmp(contrario, frase) == 0) {
        printf("%s | %s: é um palindromo", frase, contrario);
    } else {
        printf("%s | %s: não é um palindromo", frase, contrario);
    }
}