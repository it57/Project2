#include<stdio.h>
#include<string.h>
int seek(int x, int y, int z,int arr[])
{
	int i = 0;
	int k;
	scanf_s("%d\n",&k);
	int sz = sizeof(arr)/sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (z > k)
		{
			y--;
		}
		else if (z < k)
		{
			x++;
		}
		else
			return 0;
	}
	return 1;
}
int main()
{
	int t = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]);
	int mid =(left+right)/2;
	t=seek(left, right, mid,arr);
	if (t == 0)
	{
		printf("�ҵ���\n");
	}
	else
		printf("�Ҳ���\n");
	return 0;
}
