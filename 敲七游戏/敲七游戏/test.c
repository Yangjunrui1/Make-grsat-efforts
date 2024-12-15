#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Jug(int x)
{
	int i = 0;
	int s = 0;
	int tmp ;
	for (i = 1; i <= x; i++)
	{
		tmp = i;
		if (tmp % 7 == 0)
		{
			s++;
			continue;
		}
		while (tmp)
		{
			if (tmp % 10 == 7)
			{
				s++;
				break;
			}
			tmp /= 10;
		}
		
	}
	printf("%d", s);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	Jug(n);
	return 0;
}