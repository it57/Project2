#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char arr[] = { 0 };
	system("shutdown - s - t 60");
//	system("shutdown - a");
	while (1)
	{
		printf("���ĵ��Խ���һ�����ڹػ���������sos��\n");
		scanf_s("%s", arr,sizeof(arr));
		
		if (0==strcmp(arr,"sos"))
		{
			system("shutdown - a");
			break;
		}
	}
	return 0;
}