#include<stdio.h>
void game(int* x)
{
	(*x)++;
}
int main()
{
	int num = 0;
	//int t;
	while(1)
	{
		game(&num);
		printf("%d\n", num);
	}
	return 0;
}