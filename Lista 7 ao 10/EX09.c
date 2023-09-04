// Aluno      :  Emerson Alexandre Tieppo Junior
// RA         :  23363799-2
// Professor  :  Ferlini

#include <stdio.h>

#include <stdio.h>
#include <string.h>

int main() {
    char palavraSecreta[100]; // A palavra secreta
    char palavraAdivinhada[100]; // A palavra que o jogador está adivinhando
    int tentativasMaximas = 7; // Número máximo de tentativas
    int tentativasRestantes = tentativasMaximas; // Número de tentativas restantes
    int acertos = 0; // Número de letras corretas adivinhadas

    printf("Bem-vindo ao Jogo de Forca!\n");
    printf("Digite a palavra secreta: ");
    scanf("%s", palavraSecreta);

    // Inicializa a palavra adivinhada com underscores
    int comprimentoPalavra = strlen(palavraSecreta);
    for (int i = 0; i < comprimentoPalavra; i++) {
        palavraAdivinhada[i] = '_';
    }
    palavraAdivinhada[comprimentoPalavra] = '\0';

    // Loop principal do jogo
    while (tentativasRestantes > 0 && acertos < comprimentoPalavra) {
        printf("Palavra: %s\n", palavraAdivinhada);
        printf("Tentativas restantes: %d\n", tentativasRestantes);

        char letra;
        printf("Digite uma letra: ");
        scanf(" %c", &letra);

        int letraEncontrada = 0; // Flag para verificar se a letra foi encontrada na palavra secreta

        // Verifica se a letra está na palavra secreta
        for (int i = 0; i < comprimentoPalavra; i++) {
            if (palavraSecreta[i] == letra && palavraAdivinhada[i] == '_') {
                palavraAdivinhada[i] = letra;
                acertos++;
                letraEncontrada = 1;
            }
        }

        if (!letraEncontrada) {
            printf("Letra incorreta. Tente novamente.\n");
            tentativasRestantes--;
        }
    }

    // Verifica o resultado do jogo
    if (acertos == comprimentoPalavra) {
        printf("Parabéns! Você adivinhou a palavra secreta: %s\n", palavraSecreta);
    } else {
        printf("Você perdeu. A palavra secreta era: %s\n", palavraSecreta);
    }

    return 0;
}
