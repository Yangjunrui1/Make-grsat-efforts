#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int Down(int x)
//{
//	int sum = 0, i;
//	while (x > 0)
//	{
//		sum = sum * 10 + (x % 10);
//		x /= 10;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Down(n);
//	printf("%d", ret);
//	return 0;
//}
#include<stdio.h>
int Si(int x)
{
	int k = 1,tmp,x1;
	int s = 0;
	if (x == 3)
	{
		return 0;
	}
	for (k = 1; k < x; k++)
	{	
		x1 = x;
		for (tmp = 1; tmp <x1; tmp++)
		{
			s += tmp;
			if (s == x)
			{
				return 0;
			}
			x1--;
		}
	}
	return 1;
}
int Test(int* arr1, int n1)
{
	int r;
	int sum = 0;
	for (r = 0; r <n1; r++)
	{
		if (Si(arr1[r]) == 1)
		{
			sum++;
		}
	}
	return sum;
}
int main()
{
	int n = 1;
	scanf("%d", &n);
	int arr[1000] = { 0 };
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("%d", Test(arr, n));
	return 0;
}