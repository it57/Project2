#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = { "xiao ke ai" };
	char arr2[] = { "shi wo" };
	strcpy_s(arr1, arr2);
	printf("%s", arr1);
	return 0;
}