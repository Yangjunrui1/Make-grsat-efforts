#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define stu struct student
struct student
{
	int num;
	char name[40];
	int math;
	int chs;
	int eng;
};
int main()
{
	int n = 0;
	scanf("%d", &n);
	stu nt[100] = { 0 };
	for (int i = 0; i < n; i++)
	{
		scanf("%d%s%d%d%d", &nt[i].num, &nt[i].name, &nt[i].math, &nt[i].chs, &nt[i].eng);
	}
	int s = 0; int s2 = 0;
	for (int i = 0; i < n; i++)
	{
		s = nt[i].math + nt[i].chs + nt[i].eng;
		for (int j = i + 1; j < n; j++)
		{
			s2 = nt[j].math + nt[j].chs + nt[j].eng;
			if (s < s2)
			{
				stu tmp = nt[j];
				nt[j] = nt[i];
				nt[i] = tmp;
			}
		}
	}
	printf("%d %s %d %d %d ", nt[0].num, nt[0].name, nt[0].math, nt[0].chs, nt[0].eng);
	return 0;
}