#include<stdio.h>
int main()
{
	int mid=0;
	int i;
	int sb[10];
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &sb[i]);
	}
	for (i =0; i <=9; i++)
	{
		if (sb[mid] < sb[i])
		{
			mid = i;
		}
	}
	printf("%d,%d\n", mid, sb[mid]);
	return 0;
}