#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float x, y;
	printf("«Î ‰»Îxµƒ÷µ\n");
	scanf("%f", &x);
	if (x <= -5)
		y = 2 * x - 1;
	else if (x>-5&&x <= 0)
		y = 4 * x + 1;
	else if (x>0&&x < 5)
		y = x / 2 - 1;
	else
		y = x + 3;
	printf("y=%.2f", y);
	return 0;
}