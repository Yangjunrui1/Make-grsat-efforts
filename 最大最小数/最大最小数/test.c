#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = -99999; int min = 999999;
	int x = 0; int n = 0;
	for (int k = 0; k < 10; k++)
	{
		if (arr[k] > max)
		{
			max = arr[k];
			x = k;
		}
		if (arr[k] < min)
		{
			min = arr[k];
			n = k;
		}
	}
	printf("%d %d %d %d", max, x, min, n);
	return 0;
}