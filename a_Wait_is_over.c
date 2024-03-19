#include <stdio.h>
int main()
{
	printf("Enter the values of the array : \n");
	int a[10], sum = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		sum = sum + a[i];
	}
	printf("Sum of the Array : %d\n", sum);
	return 0;
}