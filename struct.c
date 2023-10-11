#include <stdio.h>

int main();
int highestGrade();
int lowestAverage();
int highestAverage();
int approvedDisapproved();


typedef struct 
{
    int Registration;
    char Name[30];
    int Grades[3];
} Student;

Student students[2];


int highestGrade()
{
    int highest_grade = 0; 
    int best_student;

    for (int i = 0; i < 2; i++) 
    {
        if (students[i].Grades[0] > highest_grade) 
        {
            highest_grade = students[i].Grades[0];
            best_student = i;
        }
            
    }

    printf("\nThe best grade in this class is from %s (%i)\n", students[best_student].Name, highest_grade);
}


int highestAverage() 
{
    float highest_average = 0;
    float current_average = 0;
    int best_average;

    for (int i = 0; i < 2; i++) 
    {
        current_average = 0;

        for (int j = 0; j < 3; j++)
        {
            current_average += students[i].Grades[j];
        }

        current_average = current_average / 3;

        if (current_average > highest_average)
        {
            highest_average = current_average;
            best_average = i;
        }
    }

    printf("\nThe best average in this class is from %s (%.2f)\n", students[best_average].Name, highest_average);
}


int lowestAverage() 
{
    float lowest_average = 110;
    float current_average = 0;
    int worst_average;

    for (int i = 0; i < 2; i++) 
    {
        current_average = 0;

        for (int j = 0; j < 3; j++)
        {
            current_average += students[i].Grades[j];
        }

        current_average = current_average / 3;

        if (current_average < lowest_average)
        {
            lowest_average = current_average;
            worst_average = i;
        }
    }

    printf("\nThe worst average in this class is from %s (%.2f)\n", students[worst_average].Name, lowest_average);
}


int approvedDisapproved() 
{

    float current_average;

    for (int i = 0; i < 2; i++) 
    {
        current_average = 0;

        for (int j = 0; j < 3; j++)
        {
            current_average += students[i].Grades[j];
        }

        current_average = current_average / 3;

        if (current_average >= 60)
            printf("\n%s was approved", students[i].Name);
        else
            printf("\n%s was disapproved\n", students[i].Name);
    }  
}


int main() 
{
    for (int i = 0; i < 2; i++) 
    {
        printf("Type student registration: ");
        scanf("%i", &students[i].Registration); 

        printf("Type student name: ");
        scanf("%s", &students[i].Name); 

        for (int j = 0; j < 3; j++) 
        {
            printf("Type student grades: ");
            scanf("%i", &students[i].Grades[j]); 
        }
    }

    highestGrade();
    highestAverage();
    lowestAverage();
    approvedDisapproved();
}
