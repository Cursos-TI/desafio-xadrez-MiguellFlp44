#include <stdio.h> // Biblioteca padrão para usar printf

int main() {
    // Movimento da TORRE usando o FOR
    // A torre se move 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n"); // Imprime a direção da casa
    }

    printf("\n"); // Pula uma linha para separar os movimentos

    // Movimento do BISPO usando o WHILE
    // O bispo se move 5 casas na diagonal para cima e para a direita
    printf("Movimento do Bispo:\n");
    int j = 1; // Começamos do 1
    while (j <= 5) {
        printf("Cima Direita\n"); // Imprime a direção da casa
        j = j + 1; // Vai para a próxima casa
    }

    printf("\n"); // Pula uma linha para separar os movimentos

    // Movimento da RAINHA usando o DO-WHILE
    // A rainha se move 8 casas para a esquerda
    printf("Movimento da Rainha:\n");
    int k = 1; // Começa do 1
    do {
        printf("Esquerda\n"); // Imprime a direção da casa
        k = k + 1; // Vai para a próxima casa
    } while (k <= 8); // Repete até chegar em 8

    return 0; // Fim do programa
}
