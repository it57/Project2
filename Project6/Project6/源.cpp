#include<stdio.h>
int main()
{
	int t = 8;
	int i;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int p = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < p; i++)
	{
		if (t == arr[i])
		{
			printf("�ҵ���:%d\n", i);
			break;
		}
	}
	if (i == p)
	{
		printf("�Ҳ���,%d\n",i);
	}
	return 0;
}