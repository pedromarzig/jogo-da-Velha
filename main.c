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
            matriz[i][j] = 0;  // Inicializando todas as posi��es com zero (pode ser outro valor inicial)
        }
    }

    // Loop para permitir que os jogadores fa�am suas jogadas
    for (;;) {
        printf("Jogador '%c', escolha a linha (0, 1, 2) e coluna (0, 1, 2) para colocar o seu caractere: ", jogador);
        scanf("%d %d", &i, &j);

        // Verificar se a posi��o est� dentro do tabuleiro e se est� vazia
        if (i >= 0 && i < 3 && j >= 0 && j < 3 && matriz[i][j] == 0) {
            matriz[i][j] = jogador;
        } else {
            printf("Posi��o inv�lida. Tente novamente.\n");
            continue;  // Volta ao in�cio do loop para permitir outra tentativa
        }

        // Mostrar o tabuleiro ap�s cada jogada (voc� pode substituir por sua l�gica de vit�ria)
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

