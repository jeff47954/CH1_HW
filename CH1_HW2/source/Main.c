#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("��J�T�ӼƦr�ӿ�O�j�p:");
	int x, y, z, max, min;
	scanf("%d %d %d", &x, &y, &z);
	max = x > y ? x : y;
	max = max > z ? max : z;
	min = x < y ? x : y;
	min = min < z ? min : z;
	printf("\n�̤j��:	%d\n", max);
	printf("�̤p��:	%d", min);
}