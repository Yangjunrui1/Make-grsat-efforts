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
			}//�ж�1��
			for (d = 2; d < k; d++)
			{
				if (k % d == 0)
				{
					dcd2 = 1;
					break;
				}
			}//�ж�2��
			if (dcd == 0 && dcd2 == 0)
			{
				count++;
			}//������������������һ
	}
	printf("%d", count);
}
int main()
{
	printf("���������>6����ż��(<32767)\n");
	int n = 0;
	scanf("%d", &n);
	Jug(n);
	return 0;
}