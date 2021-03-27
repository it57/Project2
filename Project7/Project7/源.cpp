#include<stdio.h>
int main()
{
	int i=1;
	double t = 0.0;
	//for (i = 1; i <= 100; i++)
	while(i<=100)
	{
		t += 1.0 / i;
		i++;
	}
	printf("%lf\n", t);
	return 0;
}