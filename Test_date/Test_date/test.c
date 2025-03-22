#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
main()
{
	char a[][7] = { "ABCD","EFGH","IJKL","MNOP" }, k;
	for (k = 1; k < 3; k++)
		printf("%s\n", &a[k][k]);
}