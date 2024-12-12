#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
void Jug(int n1, int m1, int n2, int m2)
{
	float lg = 0;
	lg = sqrt((n1 - n2) * (n1 - n2) + (m1 - m2) * (m1 - m2));
	printf("%.2f\n", lg);
}
int main()
{
	int x1=0;
	int y1=0;
	int x2=0;
	int y2=0;
	while (1)
	{ 
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		Jug(x1, y1, x2, y2);
	}
	return 0;
}