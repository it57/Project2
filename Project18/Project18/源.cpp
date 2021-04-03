#include<stdio.h>
#include<string.h>
int seek(int x, int y, int z, int arr[])
{
	int i = 0;
	int k;
	scanf_s("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]);
	while (x <= y)
	{
		if (arr[z] > k)
		{
			y = z - 1;
			z = (y + x) / 2;
		}
		else if (arr[z] < k)
		{
			x = z + 1;
			z = (y + x) / 2;
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
	int mid = (left + right) / 2;  arr[mid] =
		t = seek(left, right, mid, arr);
	if (t == 0)
	{
		printf("找到了\n");
	}
	else
		printf("找不到\n");
	return 0;
}