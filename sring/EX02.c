#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char stringum[50] = "Olá, ";
    char stringdois[50] = "mundo!";
    
    printf(strcat(stringum, stringdois));
}