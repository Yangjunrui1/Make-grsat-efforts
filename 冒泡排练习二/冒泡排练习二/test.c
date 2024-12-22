#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void buddle_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//一趟内部
		int j = 0;
		for (j = 0; i < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < sz - 1; i++)
	{
		printf("%d", arr[i]);
	}
}
int main()
{
	int arr[] = { 10,32,34,76,13,45,64,7,45,34 };
	//两两元素比较
	int sz = sizeof(arr) / sizeof(arr[0]);
	buddle_sort(arr, sz);
	
	return 0;
}