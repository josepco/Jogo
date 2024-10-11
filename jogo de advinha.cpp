
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, palpite, tentativas = 0, pontuacao = 100;

    // Inicializa o gerador de n�meros aleat�rios
    srand(time(0));
    numeroSecreto = rand() % 100 + 1; // Gera um n�mero entre 1 e 100

    printf("Bem-vindo ao jogo de adivinha��o!\n");

    // Loop at� o usu�rio acertar
    do {
        printf("Digite seu palpite (entre 1 e 100): ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite < numeroSecreto) {
            printf("Muito baixo!\n");
            pontuacao -= 10;
        } else if (palpite > numeroSecreto) {
            printf("Muito alto!\n");
            pontuacao -= 10;
        } else {
            printf("Parab�ns! Voc� adivinhou o n�mero em %d tentativas.\n", tentativas);
            printf("Sua pontua��o final �: %d pontos.\n", pontuacao);
        }
    } while (palpite != numeroSecreto);

    return 0;
}

