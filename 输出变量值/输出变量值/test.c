#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 5;
	int* p = &a;
	*p = 10;
	printf("%d", a);
	printf("%d", *p);
	return 0;
}