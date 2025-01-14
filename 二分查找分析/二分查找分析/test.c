#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[10] = { 1,3,4,5,7,9,10,11,12,13 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] == 7)
		{
			printf("%d", mid);
			break;
		}
		else if (arr[mid] > 7)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}

	}
	return 0;
}