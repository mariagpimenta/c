#include <stdio.h>


int main();
void invert();
void printarray();
void differenceAbsolute();


void printArray(int * ptr, int size) {

    printf("\nArray One:");
    
    for (int i = 0; i < size; i++) {
        
        printf(" %i", ptr[i]);

    }
}


void invert(char * str) {
    
    size_t size = strlen(str);
    char char_temp; 
    
    for (int i = 0; i < size/2; i++) {

        char_temp = str[i];
        str[i] = str[size - i - 1];
        str[size - i - 1] = char_temp;

    }
}


void differenceAbsolute(int * array_one, int * array_two, int size_one, int size_two) {

    int total_one = 0, total_two = 0, total;

    for (int i = 0; i < size_one; i++) {
        total_one += array_one[i];
    }
    
    for (int i = 0; i < size_two; i++) {
        total_two += array_two[i];
    }

    total = total_one >= total_two ? total_one - total_two : total_two - total_one;
    printf("\n\nThe difference absolute between the two array is: %i", total);

}


int main() {

    int array_one[] = {2, 5, 4, 7, 8, 26, 9};
    int * ptr_array1 = array_one;
    int array_two[] = {76, 15, 3, 1, 9};
    char str_choice[20];

    printArray(ptr_array1, sizeof(array_one)/sizeof(int));

    differenceAbsolute(array_one, array_two, sizeof(array_one)/sizeof(int), sizeof(array_two)/sizeof(int));

    printf("\n\nType your word: ");
    scanf("%s", str_choice);
    
    printf("Normal Word: %s", str_choice);
    invert(str_choice);
    printf("\nInverted Word: %s\n\n", str_choice);

    return 0;
}
