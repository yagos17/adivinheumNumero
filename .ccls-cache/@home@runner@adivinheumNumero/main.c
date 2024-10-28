#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, palpite, tentativas = 0;

    srand(time(NULL));
    numeroSecreto = rand() % 100 + 1; 

    printf("// ⚽️ ADIVINHE UM NÚMERO ENTRE 1 E 100 ⚽️ //\n");
    printf("⚽️ Bem-vindo ao jogo de adivinhação, torcedor! ⚽️\n");
    printf("Prepare-se para driblar os números! Adivinhe um número entre 1 e 100, como um craque em campo:\n");
    printf("Lembre-se: é como uma final de campeonato! Cada palpite pode te levar à vitória!\n");

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite > numeroSecreto) {
            printf("⚽️ Uau, você está chutando para fora! Muito alto! Tente novamente antes que seu palpite seja rebaixado como o Corinthians!\n");
        } else if (palpite < numeroSecreto) {
            printf("⚽️ Quase lá! Você está chutando para o lado! Muito baixo! Cuidado para não cair na zona de rebaixamento!\n");
        } else {
            printf("🎉 GOOOL! Parabéns! Você adivinhou o número %d em %d tentativas! Diferente do Corinthians, você não foi rebaixado!\n", numeroSecreto, tentativas);
        }
    } while (palpite != numeroSecreto);

    return 0;
}