#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int c = n /3 ;
//	printf("%d\n", c);
//	
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c,mid;
//	scanf("%d%d%d", &a, &b, &c);
//	int z = (a > b ? a : b);
//	int x = (z > c ? z : b);
//	int m = (a < b ? a : b);
//	int r = (m < c ? m : c);
//	if (a >= b && b <= c)
//	{
//		mid = b;
//	}
//	if (c >= a && a <= b)
//	{
//		mid = a;
//	}
//	if (a >= c && c <= b)
//	{
//		mid = c;
//	}
//
//	int max = x*(r+mid);
//	printf("%d\n", max);
//
//	 
//	
//	return 0;
//
//}
#include<stdio.h>
int slove(int x, int y, int z)
{
	int ret[] = { x + y + z,(x + y) * z,(x + z) * y,(z + y) * x,x * y * z,x + y * z,z + x * y,y + z * x };
	int turn = ret[0];
	for (int i=1; i < 8; i++)
	{
		if (ret[i] >= turn)
		{
			turn = ret[i];

		}

	}
	return turn;
}
int main()
{
	printf("����������������õ�����������������ֵ");
	int num1, num2, num3;
	scanf("%d%d%d", &num1, &num2, &num3 );
	int max = slove(num1, num2, num3);
	printf("����������������õ������ֵ=%d\n", max);
	return 0;
}