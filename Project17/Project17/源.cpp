#include<stdio.h>
#include<math.h>
int pan(int x)
{
	int y;
	for (y = 2; y <= (int)sqrt(x); y += 2)
	{
		if (x % y == 0)
		{
			return 0;
		}
	}
	if (y > (int)sqrt(x))
		return 1;
}
int main()
{
	int i = 0;
	int t = 0;
	scanf_s("%d", &i);
	t = pan(i);
	if (t == 1)
		printf("%d是素数\n", i);
	else
		printf("%d不是素数\n", i);
	return 0;
}
