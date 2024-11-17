#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int day(int y, int m)
{
	if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
	{
		int ch[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
		return ch[m - 1];
	}
	
	else
	{
		int ch[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
		return ch[m - 1];
	}

	
}
int main()
{
	printf("请输入年份及月份");
	int year, mouth;
	scanf("%d%d", &year, &mouth);
	int num = day(year, mouth);
	printf("这一年月天数有%d\n", num);

	return 0;
}