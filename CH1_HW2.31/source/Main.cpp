#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("數值	次方	立方 \n");
	for (int a = 0; a < 11; a++)
		printf("%d\t %d\t %d\n", a, a*a, a*a*a);
	system("pause");
	return 0;
}