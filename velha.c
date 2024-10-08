#include <stdio.h>
#include <stdlib.h>

char matrix_game[3][3] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
};

int verifyChar(char letter) {
    return (letter == 'X' || letter == 'O') ? 1 : 0;
}

void printMatrix() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("| %c ", matrix_game[i][j]);
        }
        printf("|\n");
    }
    printf("\n");
}

int winLine() {
    for (int i = 0; i < 3; i++) {
        if (verifyChar(matrix_game[i][0]) && 
            matrix_game[i][0] == matrix_game[i][1] && 
            matrix_game[i][1] == matrix_game[i][2]) {
            return 1; 
        }
    }
    return 0;
}

int winColumns() {
    for (int i = 0; i < 3; i++) {
        if (verifyChar(matrix_game[0][i]) && 
            matrix_game[0][i] == matrix_game[1][i] && 
            matrix_game[1][i] == matrix_game[2][i]) {
            return 1; 
        }
    }
    return 0;
}

int winMainDiagonal() {
    if (verifyChar(matrix_game[0][0]) && 
        matrix_game[0][0] == matrix_game[1][1] && 
        matrix_game[1][1] == matrix_game[2][2]) {
        return 1; 
    }
    return 0;
}

int winSecondDiagonal() {
    if (verifyChar(matrix_game[0][2]) && 
        matrix_game[0][2] == matrix_game[1][1] && 
        matrix_game[1][1] == matrix_game[2][0]) {
        return 1; 
    }
    return 0;
}

int checkWin() {
    return winLine() || winColumns() || winMainDiagonal() || winSecondDiagonal();
}

int main() {
    int player = 1; 
    int row, col;
    int moves = 0;

    while (1) {
        printMatrix();

        char currentPlayer = (player % 2 == 1) ? 'X' : 'O';
        printf("Jogador %d (%c), insira linha (0-2) e coluna (0-2): ", player, currentPlayer);
        scanf("%d %d", &row, &col);

        if (row < 0 || row > 2 || col < 0 || col > 2 || matrix_game[row][col] != ' ') {
            printf("Movimento inválido! Tente novamente.\n");
            continue;
        }

        matrix_game[row][col] = currentPlayer;
        moves++;

        if (checkWin()) {
            printMatrix();
            printf("Jogador %d (%c) venceu!\n", player, currentPlayer);
            break;
        }

        if (moves == 9) {
            printMatrix();
            printf("Empate!\n");
            break;
        }

        player++;
    }

    return 0;
}
