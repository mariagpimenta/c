#include <stdio.h>


int  highestNumber(int * matrix_one) {

    int x, y, highest_num;

    highest_num = matrix_one[0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix_one[j + i * 3] > highest_num) {
                highest_num = matrix_one[j + i * 3];
                x = i;
                y = j;
            }
        }
    }

    int info = 0;

    info |= highest_num<<16;
    info |= x<<8;
    info |= y;

    return info;
}




int main() {

    int matrix_one[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%i", &matrix_one[i][j]);
        }
    }

    int info = highestNumber(matrix_one);

    printf("The highest number is: %i -> X: %d, Y: %d\n", info>>16, info>>8 & 0xff, info & 0xff);
}
