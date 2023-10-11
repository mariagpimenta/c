#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>


void sum(float *a, float b) {

    *a += b;
}

void sub(float *a, float b) {

    *a -= b;
}

void multiply(float *a, float b) {

    *a *= b;
}

void division(float *a, float b) {

    *a /= b;
}


int main() {

    char choice;
    float *number1 = malloc(sizeof(float));
    float number2;

    for(;;) {

        system("cls");
        printf("\n\nCalculator (Ctrl-C to exit)\n");
        scanf("%f %c %f", number1, &choice, &number2);

        switch (choice) {
            case '+':
                sum(number1, number2);
                break;
            case '-':
                sub(number1, number2);
                break;
            case '*':
                multiply(number1, number2);
                break;
            case '/':
                division(number1, number2);
                break;   
            default:
                printf("Bad Request 400");
                number1 = NULL;
                break;
        }

        if (number1 != NULL) 
            printf("Result: %.2f\n", *number1);

        Sleep(2000);

    }

    free(number1);   
}
