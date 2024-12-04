#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int digit(int x)
{
	int k = 0;
	while (x != 0)
	{	
		k += x % 10;
		x /= 10;
	}
	return k;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = digit(n);
	if (ret < 10)
		printf("%d", ret);
	else
		printf("%d",digit(ret));
	return 0;
}