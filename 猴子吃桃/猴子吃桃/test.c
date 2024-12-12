#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Jug(int x)
{
	int i = 1;
	int j = 1;
	for (i = 1; i < x; i++)
	{
		j = (j + 1) * 2;
	}
	printf("%d\n", j);
}
int main()
{
	//第一天悟空吃掉桃子总数一半多一个，第
	// 二天又将剩下的桃子吃掉一半多一个第
	// 一天开始吃的时候桃子一共有多少个
	int n = 1;;
	while (n)
	{
		scanf("%d", &n);
		Jug(n);
	}	
	return 0;
}