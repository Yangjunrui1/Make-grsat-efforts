#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Jug(int n1)
{
	int a = 3; 
	int b = 4; 
	int c = 5;
	switch (n1)
	{
	case 1:
		return 3;
		break;
	case 2:
		return 4;
		break;
	case 3:
		return 5;
		break;
	default:
		break;
	}
	for (int i = 1; i < n1 - 3; i++)
	{
		int tmp = 0;
		tmp = a;
		a = b;
		b = c;
		c = a + b + c;

	}
	return a + b + c;
}
int main()
{
	printf("已知一个数列的前3个数为3，4，5，以后每个数为前3个数的和，编程序求此数列的第N项\n");

	int n = 0;
	scanf("%d",&n);
	int ret = Jug(n);
	printf("%d", ret);
	return 0;
}