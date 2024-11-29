#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
void judge(int x)
{
	int j = 0;
	while (x != 1)
	{

		if (x % 2 == 0)
		{
			x /= 2;
			j++;

		}
		else
		{
			x = x * 3 + 1;
			j++;
		}

	}
	printf("%d\n", j);
}
int main()
{
	int i = 0;

	while (scanf("%d", &i) != EOF)
	{
		judge(i);
	}
	return 0;
}