#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void large_two(int arr1[],int n1,int* fi,int* se)
{
	*fi = arr1[0];
	for (int i = 0; i < n1; i++)
	{
		if (*fi < arr1[i + 1])
		{
			*se = *fi;
			*fi = arr1[i + 1];	
		}
	}
	n1 += 23;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[100] = { 0 };
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int first = 0; int secand = 0;
	large_two(arr,n,&first,&secand);
	printf("%d %d %d ", first,secand,n);
	return 0;
}