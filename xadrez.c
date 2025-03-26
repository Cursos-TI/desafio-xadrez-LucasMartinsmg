#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
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
//---------------------------------------------------------------------------------------------------------------------------------------------------
// Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    int bispo = 1, torre = 1, rainha = 1 ; //VARIAVEIS PARA MOVIMENTAÇÃO DO JOGO
    printf("#### MOVIMENTAÇÃO JOGO XADREZ ####\n Movimentação Bispo: \n");

    while (bispo <= 5) //Bispo: 5 casas na diagonal superior direita
    {
        printf("Movimento: %d diagonal superior direita\n", bispo);
        bispo++ ;
    }
    printf("MOVIMENTO BISPO REALIZADO...\n\n ");

    do // Torre: 5 casas para a direita
    {
       printf("Movimentação torre:\n");
       printf("Movimento: %d casas para a direita\n", torre);
        torre ++ ;
    } while (torre <= 5) ;
    printf("MOVIMENTO TORRE FINALIZADA\n");

    for (int rainha = 1 ; rainha <= 8 ; rainha++ ) { //Rainha: 8 casas para a esquerda
        printf("Movimento: %d casas para a esquerda\n", rainha);
    } 
    printf("MOVIMENTO RAINHA FINALIZADO\n\n");
    
    






}
