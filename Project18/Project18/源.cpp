#include<stdio.h>
void recur(int n)
{
	int p = 0;
	int m = 0;
	p = n % 10;
	m = n / 10;
	printf("%d\n", p);
	recur(m);
}
int main()
{
	int t = 0;
	scanf_s("%d", &t);
	recur(t);
	return 0;
}