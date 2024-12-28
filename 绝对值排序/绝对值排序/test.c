#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Jug(int arr1[],int j1)
{
	int k = 0, w = 0; int tmp = 0;
	for ( k = 0; k < j1; k++)
	{
		for (w = k + 1; w < j1; w++)
		{
			if (arr1[k] < 0)
			{
				tmp = -arr1[k];
			}
			else
			{
				tmp = arr1[k];
			}
			if (tmp < arr1[w])
			{
				int tmp1 = arr1[k];
				arr1[k] = arr1[w];
				arr1[w] = tmp1;
				break;
			}
		}
	}
	for (int s = 0; s < j1; s++)
	{
		printf("%d  ",arr1[s]);
	}
}
int main()
{
	int arr[100] = { 0 };
	int i = 0;
	scanf("%d", &i);
	int j = 0;
	for (j = 0; j < i; j++)
	{
		scanf("%d", &arr[j]);
	}
	Jug(arr,i);
	return 0;
}