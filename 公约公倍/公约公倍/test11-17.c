#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int multiple(int x, int y)
{
	int i = x > y ? x : y;
	while (1)
	{
		if (i % x == 0 && i % y == 0)
		{
			break;
		}
		i++;
	}
	return i;
}
int divisor(int a, int b)
{
	int s = a < b ? a : b;
	while (1)
	{
		if (a % s == 0 && b % s == 0)
		{
			break;
		}
		s--;
	}
	return s;
}

int main()
{

	int a, b;
	scanf("%d%d", &a, &b);
	int ret = multiple(a, b);
	int ret2 = divisor(a, b);
	printf("公倍数=%d 公约数=%d", ret,ret2);

	return 0;
}