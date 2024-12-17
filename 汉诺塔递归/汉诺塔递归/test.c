#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Jug(int n, char F, char A, char T)
{
	if (n == 1)
	{
		printf("%c->%c\n", F, T);
		return;
	}
	else
	{
		Jug(n - 1, F, T, A);
		printf("%c->%c\n", F, T);
		Jug(n - 1, A, F, T);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	char F='1', A='2', T='3';
	Jug(n, F, A, T);
	return 0;
}