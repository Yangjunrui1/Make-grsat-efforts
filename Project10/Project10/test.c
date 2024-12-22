#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char ch1[11] = "hello world";
	char ch[11] = { 0 };
	sscanf(ch1, "%1c%1c%1c%1c%1c%1c%1c%1c%1c%1c%1c", &ch[10], &ch[9], &ch[8], &ch[7], &ch[6], &ch[5], &ch[4], &ch[3], &ch[2], &ch[1], &ch[0]);
	for (int w = 0; w < 11; w++)
	{
		printf("%c", ch[w]);
	}
	return 0;
}