#include <stdio.h> // Biblioteca para usar printf

int main() {
    // ---------------------------
    // Movimento da TORRE
    // ---------------------------
    // A torre anda em linha reta, aqui vamos simular 5 passos para a direita
    printf("Movimento da Torre:\n");
    
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Linha em branco para separar os movimentos

    // ---------------------------
    // Movimento do BISPO
    // ---------------------------
    // O bispo anda na diagonal, aqui vamos simular 5 passos para cima e para a direita
    printf("Movimento do Bispo:\n");

    int j = 1; // contador
    while (j <= 5) {
        printf("Cima Direita\n");
        j = j + 1;
    }

    printf("\n"); // Linha em branco para separar os movimentos

    // ---------------------------
    // Movimento da RAINHA
    // ---------------------------
    // A rainha anda para qualquer lado, aqui vamos simular 8 passos para a esquerda
    printf("Movimento da Rainha:\n");

    int k = 1; // contador
    do {
        printf("Esquerda\n");
        k = k + 1;
    } while (k <= 8);

    printf("\n"); // Linha em branco para separar os movimentos

    // ---------------------------
    // Movimento do CAVALO
    // ---------------------------
    // O cavalo anda em "L": 2 passos para baixo e 1 para a esquerda
    // Vamos usar dois loops: um for (obrigatório) e um while dentro dele

    printf("Movimento do Cavalo:\n");

    int quantidade_de_movimentos = 1; // Quantas vezes o cavalo vai andar em "L"

    for (int m = 1; m <= quantidade_de_movimentos; m++) {
        // Primeiro fazemos 2 passos para baixo
        int contador_passos = 1;
        while (contador_passos <= 2) {
            printf("Baixo\n");
            contador_passos = contador_passos + 1;
        }

        // Depois 1 passo para a esquerda
        printf("Esquerda\n");
    }

    // Fim do programa
    return 0;
}
