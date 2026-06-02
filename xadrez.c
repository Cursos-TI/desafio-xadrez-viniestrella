#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
   
    int casas_Torre = 5;
    int casas_Bispo = 5;
    int casas_Rainha = 8;

    int i;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Utilizando o while na movimentação do bispo

    printf("\nMovimento do Bispo:\n");

    i = 1;
    while(i <= casas_Bispo) {
        printf("Cima Direita\n");
        i++;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Utilizando o for na movimentação da torre

    printf("\nMovimento da Torre:\n");

    for (i = 1; i <= casas_Torre; i++) {
        printf("Direita\n");
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Utilizando o do-while na movimenta da rainha

    printf("\nMovimento da Rainha:\n");

    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while(i <= casas_Rainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Utilizando o for e o while para a movimentação do cavalo

        printf("\nMovimento do Cavalo:\n");

    int movimentoVertical = 2;   // duas casas para baixo
    int movimentoHorizontal = 1; // uma casa para a esquerda

    for (i = 1; i <= 1; i++) { // loop externo

        int contador = 0;

        // loop interno: duas casas para baixo
        while (contador < movimentoVertical) {
            printf("Baixo\n");
            contador++;
        }

        // uma casa para a esquerda
        for (contador = 0; contador < movimentoHorizontal; contador++) {
            printf("Esquerda\n");
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
