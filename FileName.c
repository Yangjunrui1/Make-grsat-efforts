#define _CRT_SECURE_NO_WARNINGS

#include"stdio.h"
int main()
{
	int input = 0;
	printf("��ѧ�ڼ�\n");
	printf("Ҫ�ú�ѧϰ��(1/0)?");
	scanf("%d", &input);
	if (input == 1)
	{
		printf("�ù���\n");
	}  
	else
	{
		printf("��ƤЬ\n");
	}


	return 0;

}