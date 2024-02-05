#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age < 0)
    {
        printf("Error: Please enter a valid age.\n");
    }
    else if (age < 18)
    {
        printf("You are a minor.\n");
    }
    else if (age < 65)
    {
        printf("You are an adult.\n");
    }
    else
    {
        printf("You are a senior citizen.\n");
    }
    return 0;
}
