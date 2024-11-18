#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int FaSun(int x)
{
	int z = 0;
	for (int i = 1; i < x; i++)
	{
		if (x % i == 0)
		{
			z = z + i;
		}
	
	}
return z;
		
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int sum = FaSun(n);
	printf("%d\n", sum);
	return 0;
}