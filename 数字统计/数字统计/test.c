#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Jug(int m1)
{
	int arr[10] = { 0 };
	int k;
	int tmp;
	for (int i = 1; i < m1; i++)
	{
		k = 0;
		tmp = i;
		while (tmp)
		{

			int k = tmp % 10;
			switch (k)
			{
			case 0:
				arr[0]++;
				break;
			case 1:
				arr[1]++;
				break;
			case 2:
				arr[2]++;
				break;
			case 3:
				arr[3]++;
				break;
			case 4:
				arr[4]++;
				break;
			case 5:
				arr[5]++;
				break;
			case 6:
				arr[6]++;
				break;
			case 7:
				arr[7]++;
				break;
			case 8:
				arr[8]++;
				break;
			case 9:
				arr[9]++;
				break;
			}
			tmp /= 10;
		}
		
		
	}
	for (int j = 0; j < 10; j++)
	{
		printf("%d\n", arr[j]);
	}
}
int main()
{
	int m = 0;
	scanf("%d", &m);
	Jug(m);
	return 0;
}