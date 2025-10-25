#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    printf("============= BEM VINDO AO JOGO DE XADREZ =============\n");

    int torre = 5;

    //Mover a torre 5 casas para a direita
    printf("\n");
    printf(" ==== MOVIMENTO TORRE ==== \n");
    printf("\n");

    for (int i = 0; i < torre; i++){    
        printf("Direita\n"); // Imprime a direção do movimento 
    }

    //Mover o bisbo 5 casas para para cima é a direita
    printf("\n");
    printf(" ==== MOVIMENTO BISPO ==== \n");  
    printf("\n");

    int bisbo = 5;

    while (bisbo--)
    {
        printf("Cima, Direita\n"); // Imprime a direção do movimento
        
    }
    
    //Mover Rainha 8 casas para a esquerda
    printf("\n");
    printf(" ==== MOVIMENTO RAINHA ==== \n");
    printf("\n");

    int rainha = 8;
    int i = 0;

    do {

        printf("Esquerda\n"); // Imprime a direção do movimento
        i++;

    }while(i < rainha);


    //Mover cavalo duas casas para baixo e uma para esquerda
    printf("\n");
    printf(" ==== MOVIMENTO CAVALO ====\n");
    printf("\n");

    printf("__________________________________________________________\n\n");

    int cavalo = 1;

    while (cavalo--)
    {
        for(int i = 0; i < 2; i++){
            printf("Baixo\n"); // Imprime duas casas para baixo 
        }

        printf("Esquerda"); //Imprime uma casa para esquerda

    }

    printf("\n\n");
    

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
