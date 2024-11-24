 #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int sum(int a1)
{
	int ret = 0;
	int size = 0;
	int a2 = a1;
	int r = 1;
	int i;
	while(a2!=0)
	{
		size++;
		a2 /=10;
	}
	for (int j = 1; j <= size; j++)
	{
		int k = 1;
		for (k = 0; k <= size - j; k++)
		{

		}
		ret = ret + i;
		r++;
	}
}
int main()
{
	//输入一个数字可以得到它的逆序数与原数字的和反向数
	int a = 0;
	scanf("%d", &a);
	sum(a);
	return 0;
}