#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Jyear(int x)
{
	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
		return 1;
	else
		return 0;	
}
int Jday(int run, int m, int d)
{
	int arr[15] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (run)
		arr[1] = 29;
	int day = 0;
	for (int i = 0; i < m - 1; i++)
	{
		day += arr[i];
	}
	return (day + d);
}


int main()
{
	printf("请输入年月日\n示例输入2024/02/23\n回车输出为今年的天数\n");
	char ch[30] = { 0 };
	scanf("%s", ch);
	int n1 = 0, n2 = 0, n3 = 0;
	char c1 = 0, c2 = 0;
	sscanf(ch, "%4d%c%2d%c%2d", &n1, &c1, &n2, &c2, &n3);
	int ret1 = Jyear(n1);
	int ret2 = Jday(ret1, n2, n3);
	printf("今天是今年的第%d天\n", ret2);
	if (ret1 == 1)
	{
		printf("今年还剩%d天\n", 366 - ret2);
	}
	else
		printf("今年还剩%d天\n", 365 - ret2);
	return 0;
}