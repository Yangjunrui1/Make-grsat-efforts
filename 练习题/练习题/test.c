#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//字母大小写转换
	/*char ch = 0;
	scanf("%c", &ch);
	if (ch < 'a')
		ch += 32;
	else
		ch -= 32;
	printf("%c\n", ch);*/


	//输入四个整数判断大小
	/*int arr[4] = { 0 };
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 4; j++)
		{
			if (arr[i] < arr[j])
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", arr[i]);
	}*/
	int n = 0;
	scanf("%d", &n);
	int n1 = n;
	int size = 0;
	while (n1)
	{
		n1 % 10;
		size++;
		n1 /= 10;
	}
	int w = 1;
	for(int i=1;i<size;i++)
		w *=10;
	printf("%d", w);
	for (int j = 0; j < size; j++)
	{
		printf("%d ", n / w);
		n =n % w;
		w /= 10;
	}
	return 0;
}