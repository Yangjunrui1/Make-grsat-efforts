#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
typedef double d ;
#define SPACE ' '
int main()
{
//	const int a = 10;//const限定变量只是可读
//	int b = 3343;
//	int arr[12] = { 0 };
//	size_t w = sizeof(arr)/sizeof(int);
//	char ch = "sdfewe";
//	int f = strlen(ch);
//	printf("%d %d ", w,f);
	char ch;
	d l = 32.32;
	printf("%lf", l);
	ch = getchar();
	while (ch != '\n')
	{
		if (ch == SPACE)
			putchar(ch);
		else
			putchar(ch + 1);
		ch = getchar();
	}
	return 0;
}