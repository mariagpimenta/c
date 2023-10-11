#include <stdio.h>
#include <stdlib.h>

int main () {

    int max = 0, sum = 0, array_numbers[10] = {1, 5, 10, 9, 6, 29, 3, 14, 26, 20};
    
    for (int i = 0; i < 10; i++) {

        sum += array_numbers[i];
        printf(" + %i", array_numbers[i]);   
    }

    printf("\nThe sum of the array numbers is: %i\n", sum);   

    for (int i = 0; i < 10; i++) {

        if (array_numbers[i] > max) {
            max = array_numbers[i];
        }
    }

    printf("\nThe highest number from the array numbers is: %i\n", max);
    return 0;
}
