#define _CRT_SECURE_NO_WARNINGS
/*爱丽丝要完成一项修剪灌木的工作。有 N 棵灌木整齐的
从左到右排成一排。爱丽丝在每天傍晚会修剪一棵灌木，让
灌木的高度变为 0 厘米。爱丽丝修剪灌木的顺序是从最左
侧的灌木开始，每天向右修剪一棵灌木。当修剪了最右
侧的灌木后，她会调转方向，下一天开始向左修剪灌木。
直到修剪了最左的灌木后再次调转方向。然后如此循环往
复。灌木每天从早上到傍晚会长高 1 厘米，而其余时间不
长高。在第一天的早晨，所有灌木的高度
都是 0 厘米。爱丽丝想知道每棵灌木最高长到多高。*/
void Print(int x, int y)//x是树木个数，y是最多数
{
	int j, k;
	if (x % 2 == 0)
	{
		for (j = 1; j <= x / 2; j++)
		{
			printf("%d\n", y);
			y -= 2;
		}
		    y += 2;
		for (j = 1; j <= x / 2; j++)
		{
			printf("%d\n", y);
			y += 2;
		}
	}
	if (x % 2 != 0)
	{
		for (j = 1; j <= (x - 1) / 2; j++)
		{
			{
				printf("%d\n", y);
				y -= 2;
			}
		}
		printf("%d\n", y);
		y += 2;
		for (j = 1; j <= x / 2; j++)
		{
			printf("%d\n", y);
			y += 2;
		}
	}
}
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 2 + (n - 2) * 2;
	Print(n,i);
	return 0;
}