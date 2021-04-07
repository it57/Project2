#include<stdio.h>
int main()
{
	int mid;
	int i;
	int sb[10];
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &sb[i]);
	}
	for (i =0; i <=9; i++)
	{
		mid = sb[0];
		if (mid < sb[i])
		{
			mid = sb[i];
		}
	}
	printf("%d,%d\n", mid, sb[mid]);
	return 0;
}