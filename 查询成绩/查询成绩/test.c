#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define sco struct score
struct score
{
	int num;
	char name[40];
	int eng;
	int chi;
	int math;
};
int main()
{
	int n = 0;
	scanf("%d", &n);
	sco s1[100] = { 0 };
	for (int i = 0; i < n; i++)
	{
		scanf("%d%s%d%d%d", &s1[i].num, &s1[i].name, &s1[i].chi, &s1[i].eng, &s1[i].math);
	}
	int w = 0;
	scanf("%d", &w);
	for (int k = 0; k < n; k++)
	{
		if (s1[k].num == w)
		{
			printf("%d %s %d %d %d", s1[k].num, s1[k].name, s1[k].chi, s1[k].eng, s1[k].math);
		}
	}
	return 0;
}