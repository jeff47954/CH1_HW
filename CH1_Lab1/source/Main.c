#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	scanf("%d", &num);
	int a = num % 2;
	if (!a)
	{
		printf("this number is even");
	}
	else
	{
		printf("this number is odd");
	}
	system("pause");
	return 0;
}