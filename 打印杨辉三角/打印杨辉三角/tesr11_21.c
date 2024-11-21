#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void print(int n)
//{
//	int i, j,z;
//	int a = 1;
//	int n1 = n;
//	for (i = 1; i <= n; i++)
//	{
//		int  num = 1;
//		for (z = 1; z <= n - i; z++)
//		{
//			printf("   ");
//		}
//
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d", num);
//			num = num * (i - j) / (j + 1);
//
//		}
//		printf("\n");
//
//	}
//
//}
//int main()
//{
//	int n = 0;
//	printf("请输入杨辉三角的行数");
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
#include <stdio.h>

int main()
{
    int i, j, n = 0;
    int a[10][10] = { 0 };
    printf("Input n (n<=10):\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        a[i][0] = 1;
    }

    for (i = 1; i < n; i++)
    {

        for (j = 1; j <= i; j++)
        {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }

    }

    for (i = 0; i < n; i++)
    {

        for (j = 0; j <= i; j++)
        {
            printf("%4d", a[i][j]);
        }

        printf("\n");
    }

    return 0;
}