#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char model[20];
    char brand[20];
    char color[20];
    float price;
    int year;
}Car;

int main()
{
    FILE * data;
    data = fopen("data.txt", "a");

    int size;
    Car * cars_insert = malloc(size * sizeof(Car));

    printf("how many cars will you insert? ");
    scanf("%i", &size);

    for (int i = 0; i < size; i++)
    {
        printf("\nModel: ");
        scanf("%s", &cars_insert[i].model);

        printf("Brand: ");
        scanf("%s", &cars_insert[i].brand);

        printf("Color: ");
        scanf("%s", &cars_insert[i].color);

        printf("Price: ");
        scanf("%f", &cars_insert[i].price);

        printf("Year: ");
        scanf("%i", &cars_insert[i].year);

    
        fprintf(data, "\nModel: %s | Brand: %s | Color: %s | Price: %.2f | Year: %i\n", cars_insert[i].model, cars_insert[i].brand, cars_insert[i].color, cars_insert[i].price, cars_insert[i].year);
    }

    fclose(data);
}
