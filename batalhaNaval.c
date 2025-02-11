#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

void exibirTabuleiro(int tabuleiro[5][5]){

    printf("------Tabuleiro:-----\n");

    for (int i = 0; i < 5; i++)
    {
        printf("| ");
        for (int j = 0; j < 5; j++)
        {
            printf("%d | ",tabuleiro[i][j]);
        }

        printf("\n");        
    }
    
     printf("---------------------\n");

}
int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    int tabuleiro[5][5] = {0};

    tabuleiro[1][0] = 3;
    tabuleiro[1][1] = 3;
    tabuleiro[1][2] = 3;

    tabuleiro[2][3] = 3;
    tabuleiro[3][3] = 3;
    tabuleiro[4][3] = 3;

     // Exibindo as coordenadas dos navios
    printf(">>> Navio 1 (Horizontal) <<<\n--- Posicionado nas coordenadas: ---\n");
    printf("Parte do navio posicionado na casa [1][0]\n");
    printf("Parte do navio posicionado na casa [1][1]\n");
    printf("Parte do navio posicionado na casa [1][2]\n\n");

    printf(">>> Navio 2 (Vertical) <<<\n--- Posicionado nas coordenadas: ---\n");
    printf("Parte do navio posicionado na casa [2][3]\n");
    printf("Parte do navio posicionado na casa [3][3]\n");
    printf("Parte do navio posicionado na casa [4][3]\n\n");
    
    exibirTabuleiro(tabuleiro);


    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

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
