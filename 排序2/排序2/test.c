#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[10] = { 1,5,7,2,4,3,9,8,10,2 };
	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; i < 10; j++)
		{
			if (arr[i] >= arr[j])
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}

		}
		
	}
	for (int w = 0; w < 10; w++)
	{
		printf("%d", arr[w]);
	}
	return 0;
}