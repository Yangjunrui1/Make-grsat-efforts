#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void down(char* str)
{
	char stm = *str;
	int len = strlen(str);
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (strlen(str+1)>=2)
	{
		down(str + 1);
	}
	*(str + len - 1) = stm;
}
int main()
{
	//ѭ��ʵ��
	/*char ch [] = "abcdef";
	int left = 0;
	int sz = sizeof(ch) / sizeof(ch[0]);
	int right = sz - 2;
	int i, j;
	for (i = left, j = right; i <= j; i++, j--)
	{
		char  mep = ch[i];
		ch[i] = ch[j];
		ch[j] = mep;
	}
	int k = 0;
	for (k = 0; k < sz; k++)
	{
		printf("%c", ch[k]);
	}*/

	//����ʵ��
	char ch[] = "abcdef";
	down (ch);
	printf("%s\n", ch);
	return 0;
}