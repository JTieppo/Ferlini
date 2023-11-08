#include <stdio.h>
#include <string.h>

void trocar(char *a, char *b) {
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void permutar(char *string, int inicio, int fim) {
    if (inicio == fim) {
        printf("%s\n", string);
    } else {
        for (int i = inicio; i <= fim; i++) {
            trocar((string + inicio), (string + i));
            permutar(string, inicio + 1, fim);
            trocar((string + inicio), (string + i)); // Volta a string para a configuração original
        }
    }
}

int main() {
    char str[] = "abc"; // String para encontrar permutações
    int tamanho = strlen(str);
    permutar(str, 0, tamanho - 1);

    return 0;
}
