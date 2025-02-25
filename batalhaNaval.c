#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    int tabuleiro[10][10];
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            tabuleiro[i][j] = 0;
        }
    }
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    for (int i=0;i<3;i++){
        tabuleiro[2][i] = 3;
    }
    for (int i=4;i<7;i++){
        tabuleiro[5][i] = 3;
    }
    for (int i=9;i>6;i--){
        tabuleiro[i][9] = 3;
    }
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    for (int i=0;i<10;i++){
        printf(" ");
        for (int j=0;j<10;j++){
            printf("%d ", tabuleiro[i][j]);
        } printf("\n");
    }
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    for (int i=0, j=0;i<3;i++){
        tabuleiro[9-i][4+j] = 3;
        j++;
    }
    for (int i=0, j=0;i<3;i++){
        tabuleiro[4-i][3+j] = 3;
        j++;
    }
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
    printf("\n\n*** TABULEIRO ATUALIZADO ***\n");
    for (int i=0;i<10;i++){
        printf(" ");
        for (int j=0;j<10;j++){
            printf("%d ", tabuleiro[i][j]);
        } printf("\n");
    }

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
