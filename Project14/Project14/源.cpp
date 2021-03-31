#include<stdio.h>
void change(int* x, int* y)
{
	int t = 0;
	t =*x;
	*x =*y;
	*y = t;
	//return x,y;
}
int main()
{
	int a, b;
	scanf_s("%d%d",&a,&b);
	change(&a,&b);
	printf("%d,%d", a, b);
	return 0;
}