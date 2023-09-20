#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[50] = "nome";
    char copianome[50];
    strcpy(copianome, nome);
    printf(copianome);
}