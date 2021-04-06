#include<stdio.h>
void recur(int x)
{
	if (x>9)
	{
		//x=(x / 10);
		recur(x/10);
	}
	printf("%d  ", x % 10);
}
int main()
{
	int i;
	scanf_s("%d", &i);
	recur(i);
	return 0;
}