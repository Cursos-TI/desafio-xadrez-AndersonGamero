/**
 * @file xadrez.c
 * @brief Desafio: Movimentando as Peças do Xadrez (Nível Novato)
 *
 * Este programa simula o movimento de três peças de xadrez (Torre, Bispo e Rainha)
 * usando as estruturas de repetição for, while e do-while em C.
 * O objetivo é demonstrar a aplicação dessas estruturas para simular
 * o movimento de um número fixo de casas.
 *
 * Requisitos:
 * - Torre (5 casas para a direita) usando for.
 * - Bispo (5 casas na diagonal para cima e à direita) usando while.
 * - Rainha (8 casas para a esquerda) usando do-while.
 * - Imprimir a direção do movimento a cada casa.
 */

#include <stdio.h>

int main() {
    // -------------------------------------------------------------------------
    // 1. Simulação do Movimento da TORRE (usando 'for')
    // Movimento: 5 casas para a direita
    // -------------------------------------------------------------------------
    
    // Variável para definir o número de casas a serem movidas (constante no código)
    int casas_torre = 5; 
    
    printf("======================================\n");
    printf("      SIMULAÇÃO DO MOVIMENTO DA TORRE\n");
    printf("======================================\n");
    printf("Movendo %d casas para a Direita:\n", casas_torre);
    
    /**
     * A Torre se move em linha reta. Usamos o 'for' para iterar 
     * o número exato de casas. A variável de controle 'i' vai de 1 
     * até 'casas_torre'.
     */
    for (int i = 1; i <= casas_torre; i++) {
        // Imprime a direção a cada iteração (a cada casa percorrida)
        printf("Casa %d: Direita\n", i);
    }
    
    printf("\n"); // Linha em branco para separação
    
    // -------------------------------------------------------------------------
    // 2. Simulação do Movimento do BISPO (usando 'while')
    // Movimento: 5 casas na diagonal para cima e à direita
    // -------------------------------------------------------------------------
    
    // Variável para definir o número de casas a serem movidas
    int casas_bispo = 5;
    // Variável de controle para o loop 'while', inicializada em 0
    int contador_bispo = 0; 
    
    printf("======================================\n");
    printf("     SIMULAÇÃO DO MOVIMENTO DO BISPO\n");
    printf("======================================\n");
    printf("Movendo %d casas na diagonal (Cima e Direita):\n", casas_bispo);
    
    /**
     * O Bispo se move na diagonal. Usamos o 'while' para continuar 
     * o movimento enquanto o contador for menor que o número de casas desejado.
     */
    while (contador_bispo < casas_bispo) {
        // Incrementa o contador antes de imprimir
        contador_bispo++; 
        
        // Para a diagonal, imprimimos a combinação das duas direções
        printf("Casa %d: Cima, Direita\n", contador_bispo);
    }
    
    printf("\n"); // Linha em branco para separação
    
    // -------------------------------------------------------------------------
    // 3. Simulação do Movimento da RAINHA (usando 'do-while')
    // Movimento: 8 casas para a esquerda
    // -------------------------------------------------------------------------
    
    // Variável para definir o número de casas a serem movidas
    int casas_rainha = 8; 
    // Variável de controle para o loop 'do-while', inicializada em 0
    int contador_rainha = 0; 
    
    printf("======================================\n");
    printf("    SIMULAÇÃO DO MOVIMENTO DA RAINHA\n");
    printf("======================================\n");
    printf("Movendo %d casas para a Esquerda:\n", casas_rainha);
    
    /**
     * A Rainha se move em todas as direções (simulando linha reta). 
     * Usamos o 'do-while' para garantir que o bloco de código seja 
     * executado pelo menos uma vez, mesmo que casas_rainha fosse 0 (embora
     * neste caso seja 8). O loop continua enquanto o contador for menor 
     * que o número de casas.
     */
    do {
        // Incrementa o contador. Note que a primeira iteração será a casa 1.
        contador_rainha++;
        
        // Imprime a direção.
        printf("Casa %d: Esquerda\n", contador_rainha);
        
    } while (contador_rainha < casas_rainha);
    
    // Se o número de casas for 0, o loop 'do-while' executará 1 vez 
    // e o 'if' abaixo corrige a saída para refletir 0 movimentos.
    // Embora o requisito peça 8, incluímos este 'if' como boa prática
    // em relação à simulação do 'do-while'.
    if (casas_rainha == 0) {
         printf("Nenhum movimento realizado.\n");
    }
    
    printf("\nFim da simulação.\n");
    
    return 0;
}