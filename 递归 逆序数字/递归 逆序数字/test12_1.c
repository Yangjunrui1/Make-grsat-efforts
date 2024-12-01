#define _CRT_SECURE_NO_WARNINGS
1#include<stdio.h>
//#include<string.h>
//void down(int* arr,int  sz)
//{
//	if (sz > 0)
//	{
//		down(arr + 1, sz - 1);
//		printf("%d", *arr);
//	}
//}
//int main()
//{
//	int arr[] = { 0 };
//	int j = 0;
//	while (scanf("%d", &arr[j]) != EOF)
//	{
//		j++;
//	}
//	int sz = strlen(arr)-1;
//	down (arr, sz);
//	
//	return 0;
//}

int sort(int n)
{
	if (n == 0)
		return 0;
	int m;
	scanf("%d", &m);
	sort(n - 1);
	printf("%d", m);
}
int main()
{
	int n = 0;
	scanf("%d",&n);
	sort(n);
	return 0;
}


















