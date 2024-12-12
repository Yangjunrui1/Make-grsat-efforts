#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Jug(int n1)
{
	int count = 0;
	int dcd = 0;
	int dcd2 = 0;
	int k = 0;
	int j, d,r,i;
	for (i = 2; i <= n1 / 2; i++)
	{
		dcd = 0;
		dcd2 = 0;
		k = n1 - i;
			for (r=2; r < i; r++)
			{
				if (i % r == 0)
				{
					dcd = 1;
					break;
				}
			}//判断1素
			for (d = 2; d < k; d++)
			{
				if (k % d == 0)
				{
					dcd2 = 1;
					break;
				}
			}//判断2素
			if (dcd == 0 && dcd2 == 0)
			{
				count++;
			}//如果两个都满足个数加一
	}
	printf("%d", count);
}
int main()
{
	printf("输入任意的>6的正偶数(<32767)\n");
	int n = 0;
	scanf("%d", &n);
	Jug(n);
	return 0;
}