#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 1;
	int b = 1;
	int j = 1;
	for (int n = 1; n <= 9; n++)
	{
		a = 1; 
		for (j = 1; j <= n; j++)
		{
			printf("%d*%d=%2d  ", a, n, a * n);
			a++;
			b++;
		}
		
		printf("\n");
	}
	return 0;
}