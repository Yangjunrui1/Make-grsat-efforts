#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void Jug(int arr[], int n);
int main()
{
	int arr[] = { -11,2,4,-4,5,9,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Jug(arr, sz);
	return 0;
}
void Jug(int arr[], int n)
{
	int i,j,k;
	int max = -100;
	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			int tmp = 0;
			for (k = i; k <= j; k++)
				tmp += arr[k];
			if (tmp > max)
			{
				max = tmp;
			}

		}
	}
	printf("%d", max);
}