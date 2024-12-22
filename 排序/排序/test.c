#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Jug(int a1[])
{
	int k = 0;
	for (int k = 0; k < 9; k++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (a1[j] > a1[j + 1])
			{
				int tmp = a1[j];
				a1[j] = a1[j + 1];
				a1[j + 1] = tmp;
			}
		}
	}
	for (int w = 0; w < 10; w++)
	{
		printf("%d ", a1[w]);
	}
}
int main()
{
	int a[10] = { 1,5,7,2,4,3,9,8,10,2 };
	Jug(a);
	return 0;
}