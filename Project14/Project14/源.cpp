#include<stdio.h>
#include<memory.h>
int main()
{
	char arr[] = "woaini";
	memset(arr, '@', 4);
	printf("%s", arr);
	return 0;
}