#include <stdio.h>

int main() {
    char jogador;
    int option, i, j;
    int matriz[3][3];

    printf("Digite 'X' ou 'O' para o jogador: ");
    scanf(" %c", &jogador);

    // Mostrar o tabuleiro inicialmente
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matriz[i][j] = 0;  // Inicializando todas as posições com zero (pode ser outro valor inicial)
        }
    }

    // Loop para permitir que os jogadores façam suas jogadas
    for (;;) {
        printf("Jogador '%c', escolha a linha (0, 1, 2) e coluna (0, 1, 2) para colocar o seu caractere: ", jogador);
        scanf("%d %d", &i, &j);

        // Verificar se a posição está dentro do tabuleiro e se está vazia
        if (i >= 0 && i < 3 && j >= 0 && j < 3 && matriz[i][j] == 0) {
            matriz[i][j] = jogador;
        } else {
            printf("Posição inválida. Tente novamente.\n");
            continue;  // Volta ao início do loop para permitir outra tentativa
        }

        // Mostrar o tabuleiro após cada jogada (você pode substituir por sua lógica de vitória)
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("%c ", matriz[i][j]);
            }
            printf("\n");
        }

        // Alternar jogador
        jogador = (jogador == 'X') ? 'O' : 'X';
    }

    return 0;
}

