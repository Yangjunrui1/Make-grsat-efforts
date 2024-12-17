#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//某人有四张3分的邮票和三张5分的邮票，用这些邮票中的一张或若干张可以得到多少种不同的邮资？
	int i, j,tmp;
	int s = 0;
	int k = 0;
	int arr[30] = { 0 };
	for (i = 0; i <= 4; i++)
	{
		
		for (j = 0; j <= 3; j++)
		{
			tmp = 1;
			tmp = i * 3 + j * 5;
			arr[k] = tmp;
			int dI = 0;
				for (int w = 0; w <k; w++)
				{	
					if (tmp == arr[w])
					{
						dI = 1;
					break;
					}
				}
				if (dI == 0)
				{
					s++;
				}
			k++;
		}
	}
	printf("%d", s-1);
	return 0;
}