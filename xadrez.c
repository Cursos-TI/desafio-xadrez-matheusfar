#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.



// Função recursiva para imprimir o movimento da torre 5 casas para direita
void movimentoTorre(int casas){

    if (casas > 0){
        printf("Direita\n"); // Imprime a direção do movimento 
        movimentoTorre(casas - 1); // Chama a si mesma com casas - 1
    }
}

//Função recursiva para imprimir o movimento do bispo 5 casa para cima e para diereita
void movimentoBispo(int casas){

    if (casas > 0){
        for(int i = 0; i < 1; i++){
            printf("Cima, "); // Imprime a direção do movimento
            for(int j = 0; j < 1; j++){
                printf("Direita\n"); // Imprime a direção do movimento
            }
            movimentoBispo(casas - 1);//Chama a si mesma com casas - 1 
        }
    }
}

//Função recursiva para imprimir o movimento da rainha 8 casas para esquerda
void movimentoRainha(int casas){

    if(casas > 0){
        printf("Esquerda\n");//Imprime a direção do movimento
        movimentoRainha(casas - 1);//Chama a si mesmo com casas - 1 
    }
}


int main() {

    printf("============= BEM VINDO AO JOGO DE XADREZ =============\n");

    printf("\n");
    printf(" ==== MOVIMENTO TORRE ==== \n");
    printf("\n");

    //Mover o Torre 5 casas para direita
    movimentoTorre(5);// Chamada da função recursiva

    
    printf("\n");
    printf(" ==== MOVIMENTO BISPO ==== \n");  
    printf("\n");

    //Mover o Bisbo 5 casas para cima é a direita
    movimentoBispo(5); //Chamada da função recursiva
    
  
    printf("\n");
    printf(" ==== MOVIMENTO RAINHA ==== \n");
    printf("\n");    

    //Mover Rainha 8 casas para esquerda
    movimentoRainha(8);//Chamada da função recursiva


    printf("\n");
    printf(" ==== MOVIMENTO CAVALO ====\n");
    printf("\n");

    printf("__________________________________________________________\n\n");
   
    //Mover cavalo 2 casa para cima e 1 para direita
    int cavalo = 1;
 
    while (cavalo--)  //Faz o decremento da variavel cavalo que controla o loop externo
    {

        for(int i = 0, j = 0; i < 3 && j < 3; i++ , j++){
             
            if(i < 2){
                printf("Cima \n"); // Imprime o movimento duas casas cima
                continue;
             }   

             if(j > 1){
                printf("Direita \n"); // Imprime o movimento uma casa para direita
                break;
             }
        }
        
    }
    
    printf("__________________________________________________________\n");
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
