#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void meun()
{
	printf("----------------------\n");
	printf("-------1 play---------\n");
	printf("-------0 exit---------\n");
	printf("----------------------\n");
	printf("��ѡ��0��1\n");
}
void game()
{
	int n = 0, m = 0,k = 0;
	printf("���������ַ�Χ\n");
	scanf("%d%d", &n, &m);
	printf("�������\n");
	if (n < m)
	{
		int tmp = n;
		n = m;
		m = tmp;
	}
	srand((unsigned int)time(NULL));
	int w = m + rand() % (n - m + 1) ;
	do
	{
		scanf("%d", &k);
		if (k < w)
		{
			printf("�µ��е�С\n");
		}
		else if(k>w)
		{ 
			printf("�µ��е��\n");
		}
		else
		{
			break;
		}
		
	} while (k != w);
}
int  main()
{
	
	
	int i = 0;

	do
	{
		meun();
		scanf("%d", &i);
		switch (i)
		{
		case 1:
		{
			game();
			printf("��¶���̫�˲�����\n");
			break;
		}
		case 0:
		{
			printf("���˳���Ϸ\n");
			break;
		}
		default:
			printf("�����������������0����1\n");
			break;
		}
	} while (i);
	 
	return 0;
}