#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i;
	for (i = 100; i < 1000; i++)
	{
		int a = i % 10;
		int b = i / 10 % 10;
		int c = i / 100 ;
		if (i== a * a * a + b * b * b + c * c * c )
		{
			printf("%d\r\n", i);
		}
		
	}
	return 0;
}