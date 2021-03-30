#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game()
{
	int o = 0;
	int t = 0;
    srand(unsigned int(time(NULL)));
	t = rand()%100+1;
	while (1)
	{
		//t = rand() % 100 + 1;
		printf("请猜数字吧！\n");
		scanf_s("%d", &o);
		if (o > t)
		{
			printf("猜大了\n");
		}
		else if (o < t)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("回答正确\n");
			break;
		}
	}
}
int main()
{
	int a;
	do
	{
		printf("1 play 0 exit\n");
		scanf_s("%d", &a);
		if (a == 1)
		{
			game();
		}
		else
		{
			break;
		}
	} while (1);
	return 0;
}