#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//给定L，R 问之间有多少数下满足y，x使得x=y^2-z^2;
int Jug(int x, int y,int k1,int j2)
{
	int tmp,i,j;
	for (i = 1000; i >= 1; i--)
	{
		for (j = i-1; j >= 0; j--)
		{
			tmp = i * i - j * j;
			if (tmp <= y && tmp >= x&&j2==tmp)
			{
				return k1 + 1;
			}
		}
	}
	return k1;
}
int main()
{
	int w, j, r, k;
	k = 0;
	scanf("%d%d", &w, &r);
	
	for (j = w; j <= r; j++)
	{
		k = Jug(w, r, k,j);
	}
	printf("%d\n", k);
	
	return 0;
}