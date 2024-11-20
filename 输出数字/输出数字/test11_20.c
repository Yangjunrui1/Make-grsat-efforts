#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0; int a = 1; int b = 1; int bl = 1; int c = 1; int h = 1; int k = 1; int add = 2; int add1 = 1; int add3 = 2; int c1 = 1;
	scanf("%d", &n); 
	int n2 = n; 
	int nl = n;
		for (; n2 >= a; a++) 
		{
			b = bl;
			add = add3; c = c1;
			for (k = 1; k < h; k++)
				printf(" ");
			for (; n2 >= b; b++)
			{
				printf("%d ", c);
				c += add;
				add++;
			}
					printf("\n");
				h++;
				bl++;
				c1 += add1;
					add1++;
				add3++;
			
		}
				return 0;
}