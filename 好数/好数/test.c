#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Decide(int x,int j1)
{
	int k = 0;
	int t = 1;
	int d = 0;
	while (x != 0)
	{
		 d = x % 10;
		 if (t % 2 != 0)//�ж���ż��λ
		 {//����λ�����
			 if (d % 2 == 0)//�ж�����
			 {//ż�������
				 return j1;
			 }
		 }
		 else if (t % 2 == 0)
		 {//ż��Ϊ�����
			 if (d % 2 != 0)
			 {//��������
				 return j1;
			 }
		 }
		 else 
		 {
			 return j1;
		 }
		 x /= 10;
		t++;
	}
	return j1+1;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int j = 0;
	int i,tmp;
	for (i = 1; i <= n; i++)
	{
		tmp = i;
		j = Decide(tmp,j);
	}
	printf("%d", j);
	return 0;
}