#include <stdio.h>

// Número de casas para mover (pode mudar se quiser)
int casasTorre = 2;
int casasBispo = 2;
int casasRainha = 2;

// ---------- TORRE (usando recursão) ----------
void torreCima(int n) {
    if (n == 0) return;
    printf("Torre: Cima\n");
    torreCima(n - 1);
}

void torreBaixo(int n) {
    if (n == 0) return;
    printf("Torre: Baixo\n");
    torreBaixo(n - 1);
}

void torre() {
    printf("\nMovimentos da Torre:\n");
    torreCima(casasTorre);
    torreBaixo(casasTorre);
}

// ---------- BISPO (recursivo e loops aninhados) ----------
void bispoDiagonalCimaDireita(int n) {
    if (n == 0) return;
    printf("Bispo: Diagonal para cima e direita\n");
    bispoDiagonalCimaDireita(n - 1);
}

void bispo() {
    printf("\nMovimentos do Bispo (recursivo):\n");
    bispoDiagonalCimaDireita(casasBispo);

    printf("\nMovimentos do Bispo (com loops):\n");
    for (int i = 1; i <= casasBispo; i++) {
        for (int j = 1; j <= casasBispo; j++) {
            if (i == j) {
                printf("Bispo: Diagonal i = %d, j = %d\n", i, j);
            }
        }
    }
}

// ---------- RAINHA (mistura de torre e bispo) ----------
void rainha() {
    printf("\nMovimentos da Rainha:\n");
    torreCima(casasRainha);
    bispoDiagonalCimaDireita(casasRainha);
}

// ---------- CAVALO (com loops aninhados) ----------
void cavalo() {
    printf("\nMovimentos do Cavalo:\n");

    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            if (x == 2 && y == 1) {
                printf("Cavalo: Move 2 para cima, 1 para a direita\n");
                continue;
            }

            if (x == 1 && y == 2) {
                printf("Cavalo: Move 1 para cima, 2 para a direita\n");
                break; // só mostra uma vez
            }
        }
    }
}

// ---------- FUNÇÃO PRINCIPAL ----------
int main() {
    torre();
    bispo();
    rainha();
    cavalo();

    return 0;
}
