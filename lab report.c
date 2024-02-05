#include <stdio.h>

int main()
{
    // Declare variables to store marks for each course
    int computerFundamental, softwareEngineering, english, math, artOfLiving;

    // Input marks for each course
    printf("Enter marks for Computer Fundamental: ");
    scanf("%d", &computerFundamental);

    printf("Enter marks for Introduction to Software Engineering: ");
    scanf("%d", &softwareEngineering);

    printf("Enter marks for English: ");
    scanf("%d", &english);

    printf("Enter marks for Math: ");
    scanf("%d", &math);

    printf("Enter marks for Art of Living: ");
    scanf("%d", &artOfLiving);

    // Calculate total marks and percentage
    int totalMarks = computerFundamental + softwareEngineering + english + math + artOfLiving;
    float percentage = (float)totalMarks / 5;

    // Determine the grade based on the percentage
    char grade;
    if (percentage >= 90)
    {
        grade = 'A';
    }
    else if (percentage >= 80)
    {
        grade = 'B';
    }
    else if (percentage >= 70)
    {
        grade = 'C';
    }
    else if (percentage >= 60)
    {
        grade = 'D';
    }
    else if (percentage >= 40)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }

    // Display the result
    printf("\nTotal Marks: %d\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
