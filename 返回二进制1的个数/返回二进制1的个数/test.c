#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int cou(unsigned x)
{
	int n = 0;
	int t;
	int s = 0;
	/*while(1)
	{
		if (x % 2 == 1)
		{
			s++;
		}
		x/= 2;
		if (x == 1)
		{
			s++;
			break;
		}
		if (x == 0)
		{
			break;
		}
	}*/
	while (x)
	{
		if (x % 2 == 1)
		{
			s++;
		}
		x /= 2;
	}
	return s;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = cou(n);
	printf("%d", ret);

	return 0;
}