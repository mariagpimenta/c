#include <stdio.h>

int mult(int n, int range) {
    if (range == 0) {
        return 0;
    }
    printf("%i x %i = %i\n", n, range, n*range);
    mult(n, range - 1);
}    

int main() {
    int num;
    printf("\n Digite o numero que deseja a tabuada: ");
    scanf("%i", &num);
    mult(num, 10);
}
