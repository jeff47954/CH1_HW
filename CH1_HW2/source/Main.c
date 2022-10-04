#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("块计ㄓ快:");
	int x, y, z, max, min;
	scanf("%d %d %d", &x, &y, &z);
	max = x > y ? x : y;
	max = max > z ? max : z;
	min = x < y ? x : y;
	min = min < z ? min : z;
	printf("\n程:	%d\n", max);
	printf("程:	%d", min);
}