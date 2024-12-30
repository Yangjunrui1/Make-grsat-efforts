#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define pit struct point
struct point
{
	int x;
	int y;
};
void Jug(pit s, pit w)
{
	float h = sqrt((s.x - w.x) * (s.x - w.x) + (s.y - w.y) * (s.y - w.y));
	printf("%.2f", h);
}
int main()
{
	pit di[2] = {0};
	for (int i = 0; i < 2; i++)
	{
		scanf("%d%d", &di[i].x, &di[i].y);
	}
	Jug(di[0], di[1]);
	return 0;
}