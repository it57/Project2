#include<stdio.h>
int main()
{
	int sum = 0;
	float ave = 1.0;
	int i;
	int k[5];
	float t = sizeof(k) / sizeof(k[0]);
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &k[i]);
	}
	for (i = 0; i < 5; i++)
	{
		sum += k[i];
	}
	ave = sum / t;
	for (i = 0; i < 5; i++)
	{
		if (k[i] > ave)
		{
			printf("%d\n", k[i]);
		}
	}
	printf("%.3f\n", ave);
	return 0;
}