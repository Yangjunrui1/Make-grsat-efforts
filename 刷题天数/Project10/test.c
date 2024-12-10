#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, j, k;
	scanf("%d%d%d", &i, &j, &k);
	int sum = 0;
	int day = 1;
	while (1)
	{
		for (int r = 1; r <= 5; r++)
		{
			sum += i;
			day++;
			
			if (sum >= k)
				break;
		}
		if (sum >= k)
			break;
		day--;

		for (int d = 1; d <= 2; d++)
		{
			sum += j;
			day++;
			if (sum >= k)
				break;

		}
		if (sum >= k)
			break;
	}
	printf("%d", day);
	return 0;
}