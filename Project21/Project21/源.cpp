#include<stdio.h>
int main()
{
	int i;
	int arr[10];
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (i = 9; i >= 0; i--)
	{
		printf("%d\t", arr[i]);
	}
	return 0;
}