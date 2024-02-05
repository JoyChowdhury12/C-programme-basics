#include <stdio.h>
void changeValue(int *address)
{
    *address = 345;
    return;
}
int main()
{
    int a = 34, b = 56;
    printf("The value of a is now %d\n", a);
    changeValue(&a);
    printf("The value of a is now %d\n", a);
    return 0;
}
