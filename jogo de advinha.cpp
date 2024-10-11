
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, palpite, tentativas = 0, pontuacao = 100;

    // Inicializa o gerador de números aleatórios
    srand(time(0));
    numeroSecreto = rand() % 100 + 1; // Gera um número entre 1 e 100

    printf("Bem-vindo ao jogo de adivinhação!\n");

    // Loop até o usuário acertar
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
            printf("Parabéns! Você adivinhou o número em %d tentativas.\n", tentativas);
            printf("Sua pontuação final é: %d pontos.\n", pontuacao);
        }
    } while (palpite != numeroSecreto);

    return 0;
}

