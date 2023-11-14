#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ehPalindromo(char *str) {
    int esquerda = 0;
    int direita = strlen(str) - 1;

    while (direita > esquerda) {
        while (!isalnum(str[esquerda])) // Avança o ponteiro da esquerda até encontrar um caractere alfanumérico
            esquerda++;
        
        while (!isalnum(str[direita])) // Retrocede o ponteiro da direita até encontrar um caractere alfanumérico
            direita--;

        if (tolower(str[esquerda]) != tolower(str[direita])) // Compara os caracteres desconsiderando diferenças de maiúsculas/minúsculas
            return 0;

        esquerda++;
        direita--;
    }
    return 1; // Se a string é um palíndromo
}

int main() {
    char palavra[] = "Socorram-me, subi no ônibus em Marrocos";
    
    if (ehPalindromo(palavra))
        printf("A string é um palíndromo.\n");
    else
        printf("A string não é um palíndromo.\n");

    return 0;
}
