#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Jug(int x, int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return x * Jug(x,n-1);
	}
}
int main()
{
	int x, n;
	scanf("%d%d", &x, &n);
	int ret = Jug(x, n);
	printf("%d", ret);
	return 0;
}