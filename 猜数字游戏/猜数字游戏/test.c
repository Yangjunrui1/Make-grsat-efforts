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
	printf("请选择0或1\n");
}
void game()
{
	int n = 0, m = 0,k = 0;
	printf("请输入数字范围\n");
	scanf("%d%d", &n, &m);
	printf("请猜数字\n");
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
			printf("猜的有点小\n");
		}
		else if(k>w)
		{ 
			printf("猜的有点大\n");
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
			printf("你猜对了太了不起了\n");
			break;
		}
		case 0:
		{
			printf("已退出游戏\n");
			break;
		}
		default:
			printf("输入错误请重新输入0或者1\n");
			break;
		}
	} while (i);
	 
	return 0;
}