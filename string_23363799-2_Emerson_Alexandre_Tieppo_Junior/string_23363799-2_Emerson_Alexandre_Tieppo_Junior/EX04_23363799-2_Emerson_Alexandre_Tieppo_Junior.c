#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int contador, contaVogal = 0;
    char palavra[50];

    printf("Digite uma palavra: ");
    scanf(" %s", &palavra);
    contador = strlen(palavra);
    while (contador >= 0)
    {
        if (palavra[contador] == 'a' || palavra[contador] == 'A' || palavra[contador] == 'e' || palavra[contador] == 'E' || palavra[contador] == 'i' || palavra[contador] == 'I' || palavra[contador] == 'o' || palavra[contador] == 'O' || palavra[contador] == 'u' || palavra[contador] == 'U') 
            contaVogal ++;
        contador --;
    }
    printf("A palavra %s tem %i vogal(is)", palavra, contaVogal);
    return 0;
}