#include<stdio.h>
int peng(int x, int y)
{
	int max = 0;
	if (x > y)
	{
		max = x;
	}
	else
		max = y;
	return max;
}
int main()
{
	int i,z;
	int t = 0;
	scanf_s("%d%d", &i, &z);
	t=peng(i,z);
	printf("%d\n", t);
	return 0;
}