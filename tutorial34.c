#include <stdio.h>
void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    // char str[] = {'h', 'a', 'r', 'r', 'y', '\0'};
    // char str[6] = "harry";
    char str[52];
    gets(str);
    printf("Using custom function print str : \n");
    printStr(str);
    printf("Using printf %s\n", str);
    printf("Using puts : \n");
    puts(str);

    return 0;
}