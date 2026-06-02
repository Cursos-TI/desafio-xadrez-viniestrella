#include <stdio.h>
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    // ======================================
    // Função recursiva para a Torre
    // Movimento: 5 casas para a direita
    // ======================================
    void moverTorre(int casas) {
        if (casas == 0) {
            return;
        }

        printf("Direita\n");
        moverTorre(casas - 1);
    }

    // ======================================
    // Função recursiva para a Rainha
    // Movimento: 8 casas para a esquerda
    // ======================================
    void moverRainha(int casas) {
        if (casas == 0) {
            return;
        }

        printf("Esquerda\n");
        moverRainha(casas - 1);
    }

    // ======================================
    // Função recursiva para o Bispo
    // Movimento: 5 casas na diagonal
    // Utiliza loops aninhados:
    // Externo = vertical
    // Interno = horizontal
    // ======================================
    void moverBispo(int casas) {
        if (casas == 0) {
            return;
        }

        int vertical;
        int horizontal;

        // Loop externo (vertical)
        for (vertical = 0; vertical < 1; vertical++) {

            // Loop interno (horizontal)
            for (horizontal = 0; horizontal < 1; horizontal++) {
                printf("Cima Direita\n");
            }
        }

        moverBispo(casas - 1);
    }

    int main() {

        // Quantidade de movimentos
        int casasTorre = 5;
        int casasBispo = 5;
        int casasRainha = 8;

        // ==========================
        // Movimento da Torre
        // ==========================
        printf("Movimento da Torre:\n");
        moverTorre(casasTorre);

        // ==========================
        // Movimento do Bispo
        // ==========================
        printf("\nMovimento do Bispo:\n");
        moverBispo(casasBispo);

        // ==========================
        // Movimento da Rainha
        // ==========================
        printf("\nMovimento da Rainha:\n");
        moverRainha(casasRainha);

        // ==========================
        // Movimento do Cavalo
        // 2 casas para cima
        // 1 casa para a direita
        // Utilizando loops aninhados,
        // múltiplas variáveis,
        // continue e break.
        // ==========================
        printf("\nMovimento do Cavalo:\n");

        int linha;
        int coluna;

        for (linha = 1; linha <= 2; linha++) {

            for (coluna = 1; coluna <= 2; coluna++) {

                // Executa apenas na primeira coluna
                if (coluna > 1) {
                    continue;
                }

                printf("Cima\n");
            }
        }

        for (coluna = 1; coluna <= 2; coluna++) {

            printf("Direita\n");

            // Interrompe após uma casa
            break;
        }

        return 0;
    }