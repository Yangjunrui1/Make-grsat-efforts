#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Did(int n1, int x1, int y1)
{
	int i, j;
	for (i = 0; i <= n1 / x1; i++)
	{
		for (j = 0; j <= n1/y1; j++)
		{
			if (i * x1 + j * y1 == n1)
			{
				return 0;
			}
		}
	}
	return 1;
}
int Jug(int x, int y)
{
	int s = 0;
	int i;
	for ( i = x * y-1; i > (x > y ? x : y); i--)
	{
		s = Did(i, x, y);
		if (s != 0)
		{
			return i;
		}
	}
	
}
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int ret = Jug(n, m);
	printf("%d", ret);
	return 0;
}