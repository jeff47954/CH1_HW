#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float H;
	float W;
	float bmi;
	printf("��J�A������(����)�魫(����): ");
	scanf("%f %f", &H, &W);
	bmi = W / (H*H);
	printf("�A�� BMI : %f \n", bmi);
	if (bmi < 18.5)
	{
		printf("�L�� \n");
	}
	if (bmi >= 18.5)
	{
		if (bmi < 24.9)
		{
			printf("���` \n");
		}
	}
	if (bmi >= 25)
	{
		if (bmi < 29.9)
		{
			printf("�L�� \n");
		}
	}
	if (bmi >= 30)
	{
		printf("�έD \n");
	}
	printf("BMI �� : \n �L�� \t : �p�󵥩� 18.5 \t \n ���` \t : �b 18.5 �M 24.9 ���� \t \n �L�� \t : �b 25 �M 29.9 ���� \t \n �έD \t \t : �j�󵥩� 30  \t \n");
	system("pause");
	return 0;
}