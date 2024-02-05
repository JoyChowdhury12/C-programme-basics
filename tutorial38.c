#include <stdio.h>
typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} std;
int main()
{
    // int *a, b;
    typedef int *integerPointer;
    integerPointer a, b;
    int c = 69;
    a = &c;
    b = &c;

    /*std s1, s2;

    s1.id = 34;
    s2.id = 56;
    printf("The value of s1's id is %d\n", s1.id);
    printf("The value of s2's id is %d\n", s2.id);*/

    // typedef <previous_name> <alias_name>

    /*typedef int integer;
    integer a = 34;
    printf("The value of a is : %d\n", a);*/

    return 0;
}
