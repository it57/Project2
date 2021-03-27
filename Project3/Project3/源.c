#include<stdio.h>
int main()
{
	int i, j;
	int c=1;
	for (i = 1; i <= 3; i++)
	{
		c = 1;
		for (j = 1; j <= i; j++)
			c = c * j;
	}
	printf("%d\n", c);
	return 0;
}