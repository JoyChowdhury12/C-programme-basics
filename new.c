#include <stdio.h>
int main()
{
    int hour, speed;
    double distance;
    scanf("%d %d", &hour, &speed);
    distance = speed * hour;
    printf("%.3lf\n", distance / 12);

    return 0;
}