#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};
struct Student harry, ravi, shubham;
void print()
{
    printf("Harry potter is the boss\n", harry.name);
}

int main()
{
    struct Student harry, ravi, shubham;
    harry.id = 1;
    ravi.id = 2;
    shubham.id = 3;

    harry.marks = 66;
    ravi.marks = 46;
    shubham.marks = 466;

    harry.fav_char = 'p';
    ravi.fav_char = 'p';
    shubham.fav_char = 'p';
    printf("Harry's id is %d\n", harry.id);
    printf("ravi's id is %d\n", ravi.id);
    printf("shubham's id is %d\n\n", shubham.id);
    printf("Harry got %d marks\n", harry.marks);
    printf("ravi got %d marks\n", ravi.marks);
    printf("shubham got %d marks\n\n", shubham.marks);
    printf("Harry's favourite character is %c\n", harry.fav_char);
    printf("ravi's favourite character is %c\n", ravi.fav_char);
    printf("shubham's favourite character is %c\n\n", shubham.fav_char);

    strcpy(harry.name, "Harry potter");
    printf("Harry's real name is : %s\n", harry.name);

    print();
    return 0;
}
