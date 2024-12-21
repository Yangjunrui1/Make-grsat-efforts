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
	printf("������������\nʾ������2024/02/23\n�س����Ϊ���������\n");
	char ch[30] = { 0 };
	scanf("%s", ch);
	int n1 = 0, n2 = 0, n3 = 0;
	char c1 = 0, c2 = 0;
	sscanf(ch, "%4d%c%2d%c%2d", &n1, &c1, &n2, &c2, &n3);
	int ret1 = Jyear(n1);
	int ret2 = Jday(ret1, n2, n3);
	printf("�����ǽ���ĵ�%d��\n", ret2);
	if (ret1 == 1)
	{
		printf("���껹ʣ%d��\n", 366 - ret2);
	}
	else
		printf("���껹ʣ%d��\n", 365 - ret2);
	return 0;
}