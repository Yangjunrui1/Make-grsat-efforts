#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Jug(int n1, int m1)
{
	int arr[100] = { 0 };
	int k = 2;
	for (int i = 0; i < 100; i++)
	{
		arr[i] = k;
		k += 2;
	}
	int k1 = 0,sum=0;
	for (int i1= 0;i1<n1/m1;i1++)
	{
		sum = 0;
		for (int i2 = 0; i2 < m1; i2++)
		{
			sum += arr[k1];
			k1++;
		}
		printf("%d ", sum / m1);
	}
	sum = 0;
	for (int i2 = 0; i2 < n1 % m1; i2++)
	{
		sum+= arr[k1];
	}
	printf("%d ", sum / (n1%m1));
}
int main()
{
	int n=0,m = 0;
	scanf("%d%d", &n, &m);
	Jug(n, m);
	return 0;
}