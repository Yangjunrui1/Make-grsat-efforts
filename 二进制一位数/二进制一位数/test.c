#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int  n = 0;
	scanf("%d", &n);
	int count = 0;
	int num = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n /= 2;
	}
	printf("%d", count);
	return 0;
}