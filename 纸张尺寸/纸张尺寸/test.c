#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	printf("请输入纸张类型后会输出纸张大小\n");
	/*char arr[5] = { 0 };
	scanf("%s", arr);
	int i = 1189;
	int j = 841;
	int k = (int)arr[1];
	int tmp;
	for (i = 0; i < k; i++)
	{
		tmp = i;
		i = j;
		j = i / 2;
	}
	printf("%d\n%d\n", i, j);
	*/
	char ch[4] = { 0 };
	scanf("%s", &ch);
	int i = ch[1] - '0';
	int j = 1189;
	int k = 841;
	int r ,tmp;
	for (r = 0; r < i; r++)
	{
		tmp = j;
		j = k;
		k = tmp / 2;
	}
	printf("长=>%d\n宽=>%d\n", j, k);

	
	return 0;
}