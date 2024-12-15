#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int s = 0;
	int tmp = 0;
	int j = 0;
	for (i = 2; i <= 1000; i++)
	{
		s = 0;
		tmp = i;
		while (tmp)
		{
			j = tmp%10;
			s += (j * j * j);
			tmp /= 10;
		}
		if (s == i)
		{
			printf("%d\n", s);
		}
	}
	return 0;
}