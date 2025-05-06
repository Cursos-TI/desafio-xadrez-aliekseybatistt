#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimentoTorre(int casa){
    if (casa > 0){
        printf("Direita\n");
        movimentoTorre(casa - 1);
    }
}

void movimentoRainha(int casa){
    if (casa > 0){
        printf("Esquerda\n");
        movimentoRainha(casa - 1);
    }
}

void movimentoBispo(int casa){
    for(int i = casa; i > 0; i--){
        for (int j = casa; j > 0; j--)
        {
            printf("Direita ");
            break;
        }
        printf("Cima\n");
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

   movimentoBispo(5);
   printf("\n");
    

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

   movimentoTorre(5);
   printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    movimentoRainha(8);
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    for(int i = 2, j = 2; i > 0 || j > 0; i--, j--){
        
        if(i > 0) {
            printf("Cima\n");
            
        } if(j > 0) {
            if ( j == 2) continue;
            printf("Direita\n");
            
        }
        
    }
    printf("\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
