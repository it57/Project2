#include<stdio.h>
int change(int x)
{
	if((x % 400 == 0 )||( x % 4 == 0 && x % 100 != 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int t;
	int year;
	scanf_s("%d", &year);
	t=change(year);
	if (t == 1)
	{
		printf("������\n");
	}
	else
		printf("��������\n");
	return 0;
}