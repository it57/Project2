#include<stdio.h>
int main()
{
	int i, j;
	int c = 1;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			c = i * j;
			printf("%d*%d=%d ", i, j, c);
		}
		printf("\n");
	}
	return 0;
}