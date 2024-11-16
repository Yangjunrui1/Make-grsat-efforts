#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

extern int g_val;
void test()
{
	/// static int n = 5;
	 int n = 5;
	printf("%d\n", n);
	n++;
}
int main()
{
	printf("%d\n", g_val);
	int i = 0;
	for (i = 1; i<5; i++)
	{
		test();
	}
	return 0;
}