#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n = 1;
	int j = 1;
	int k;
	int h = 1;
	int m = 9;
	int a = 1;
	int b = 1;
	int l = 1;
	int y = 1;

		for (; n <= 9; n++)
		{
			a = l;
			b = y;
			
			for (k = 1; k < h; k++)
			{
				printf("          ");
			}
			for (j = 1; j <= m; j++)
			{
				
				int c = a * b;
				printf(" %d*%d = %d  ",a,b,c);
				b = b + 1;
			}
			printf("\n");
			
			h++;
			m--;
			l++;
			y++;
		}
	return 0;
}