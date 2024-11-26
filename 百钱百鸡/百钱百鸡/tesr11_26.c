#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//公鸡5钱一只母鸡两钱一只雏鸡一钱三只
	int a, b, c, s;
	for(a =1;a<=20;a++)
		for(b=1;b<=50;b++)
			for (c = 1; c <= 300; c++)
			{
				if (a + b + c == 100 && a * 15 + b * 6 + c == 300)
				{
					printf("公鸡有%d,母鸡有%d,小鸡%d只\n", a, b, c);
				}
			}
			return 0;
}