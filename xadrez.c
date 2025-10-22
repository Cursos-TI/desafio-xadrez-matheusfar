#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int t = 0;
    int b = 0;
    int r = 0;

    //Mover a torre 5 casas para a direita
    printf("\n");
    printf(" ==== MOVIMENTO TORRE ==== \n");
    printf("\n");

    for (int t = 0; t < 5; t++){    
        printf("Direita\n"); // Imprime a direção do movimento 
    }

    //Mover o bisbo 5 casas para para cima é a direita
    printf("\n");
    printf(" ==== MOVIMENTO BISPO ==== \n");  
    printf("\n");


    while (b < 5)
    {
        printf("Cima, Direita\n"); // Imprime a direção do movimento
        b++;
    }
    
    //Mover Rainha 8 casas para a esquerda
    printf("\n");
    printf(" ==== MOVIMENTO RAINHA ==== \n");
    printf("\n");

    do {

        printf("Esquerda\n"); // Imprime a direção do movimento
        r++;


    }while(r < 8);


    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
