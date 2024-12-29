#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define New struct new
struct new
{
	int num ;
	char ch[30];
	int chi;
	int math;
	int engl;
};
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d", &n);
	New srt[100] = {0};
	for (int i = 0; i < n; i++)
	{
		scanf("%d%s%d%d%d",&srt[i].num, &srt[i].ch, &srt[i].chi, &srt[i].math, &srt[i].engl);
	}
	/*printf("%d\n%s\n%d\n%d\n%d\n", srt[0].num, srt[0].ch, srt[0].chi, srt[0].math, srt[0].engl);*/
	scanf("%d", &k);
	int arr[100] = { 0 };
	int h, p;
	switch (k)
	{
	case 1:
		for (int j = 0; j < n; j++)
		{
			for (h = j+1; h < n; h++)
			{
				if (srt[j].chi < srt[h].chi)
				{
					arr[j] = h;
				}
				else
					arr[j] = j;
			}
		}
		break;
	case 2 :
		for (int j = 0; j < n; j++)
		{
			for (h = j + 1; h < n; h++)
			{
				if (srt[j].math < srt[h].math)
				{
					arr[j] = h;
				}
				else
					arr[j] = j;
			}
		}
	case 3:
		for (int j = 0; j < n; j++)
		{
			for (h = j + 1; h < n; h++)
			{
				if (srt[j].engl < srt[h].engl)
				{
					arr[j] = h;
				}
				else
					arr[j] = j;
			}
		}
		break;
	default:
		break;
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
	}
	int l = 0;
	for (int i = 0; i < n; i++)
	{
		l = arr[i];
		printf("%d %s %d %d %d\n", srt[l].num, srt[l].ch, srt[l].chi, srt[l].math, srt[l].engl);
	}
	return 0;
}