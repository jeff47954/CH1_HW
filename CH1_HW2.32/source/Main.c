#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float H;
	float W;
	float bmi;
	printf("輸入你的身高(公尺)體重(公斤): ");
	scanf("%f %f", &H, &W);
	bmi = W / (H*H);
	printf("你的 BMI : %f \n", bmi);
	if (bmi < 18.5)
	{
		printf("過輕 \n");
	}
	if (bmi >= 18.5)
	{
		if (bmi < 24.9)
		{
			printf("正常 \n");
		}
	}
	if (bmi >= 25)
	{
		if (bmi < 29.9)
		{
			printf("過重 \n");
		}
	}
	if (bmi >= 30)
	{
		printf("肥胖 \n");
	}
	printf("BMI 值 : \n 過輕 \t : 小於等於 18.5 \t \n 正常 \t : 在 18.5 和 24.9 之間 \t \n 過重 \t : 在 25 和 29.9 之間 \t \n 肥胖 \t \t : 大於等於 30  \t \n");
	system("pause");
	return 0;
}