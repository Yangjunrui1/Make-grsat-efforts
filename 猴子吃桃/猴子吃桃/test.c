#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Jug(int x)
{
	int i = 1;
	int j = 1;
	for (i = 1; i < x; i++)
	{
		j = (j + 1) * 2;
	}
	printf("%d\n", j);
}
int main()
{
	//��һ����ճԵ���������һ���һ������
	// �����ֽ�ʣ�µ����ӳԵ�һ���һ����
	// һ�쿪ʼ�Ե�ʱ������һ���ж��ٸ�
	int n = 1;;
	while (n)
	{
		scanf("%d", &n);
		Jug(n);
	}	
	return 0;
}