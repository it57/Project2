#include<stdio.h>
int main()
{
	int arr[10];
	int i;
	int sum = 0;
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (i = 9; i>= 0; i--)
	{
		printf("%d\t", arr[i]);
		sum += arr[i];
	}
	printf("%d\n", sum);
	return 0;
}