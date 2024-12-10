#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Test(int x, int y)
{
	if (x % y == 0)
	{
		return y;
	}
	else
	{
		int tmp = x - y;
		x = y;
		y = tmp;
		Test(x, y);
	}
}
int main()
{
	printf("请输入两个数后输出最大公约数\n");
	int a, b,c;
	scanf("%d%d", &a, &b);
	if (a < b)
	{
		c = a;
		a = b;
		b = a;
	}
	int ret = Test(a, b);
	printf("最大公约数是%d",ret);
	return 0;
}