#include <stdio.h>
#include <stdlib.h>


char matrix_game[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
};


int verifyChar(char letter) {

    if (letter == 'X' || letter == 'O')
        return 1;
    
    else 
        return 0;
}


void matrix() {

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {

            printf("%i", matrix_game[i][j]);
        }
    }
}


int winLine() {

    int equal = 1;

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {

            if (verifyChar(matrix_game[i][j]) && matrix_game[i][j] == matrix_game[i][j + 1])
                equal++;
            
            if (equal == 3)
                return 1;

            equal = 1;
        }

    return 0;
    }
}


int winColumns() {

    int equal = 1;

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {

            if (verifyChar(matrix_game[i][j]) && matrix_game[i][j] == matrix_game[j + 1][i])
                equal++;
            
            if (equal == 3)
                return 1;

        }

    return 0;
    }
}


int winMainDiagonal() {

    int equal = 1;

    for (int i = 0; i < 2; i++) {

        if (verifyChar(matrix_game[i][i]) && matrix_game[i][i] == matrix_game[i + 1][i + 1])
            equal++;
            
        if (equal == 3)
            return 1;

        }

    return 0;
}
  

int winSecondDiagonal() {

    int equal = 1;  

    for (int i = 0; i < 3; i++) {

        if (verifyChar(matrix_game[i][3 - i - 1]) && matrix_game[i][3 - i - 1] == matrix_game[i + 1][3 - i - 2])
            equal++;
            
        if (equal == 3)
            return 1;

        }

    return 0;
}

int main() {




    return 0;
}
