#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char input[100] = {0};
	int n1=0, n2=0, n3=0;
	char i = 0;
	char j = 0;
	scanf("%s", input);
	sscanf(input, "%4d%c%2d%c%2d", &n1, &i, &n2, &j, &n3);
	printf("%d%d%d", n1, n2, n3);
	return 0;
} 