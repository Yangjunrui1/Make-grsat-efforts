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
		 if (t % 2 != 0)//判断奇偶数位
		 {//奇数位进里边
			 if (d % 2 == 0)//判断数字
			 {//偶数进里边
				 return j1;
			 }
		 }
		 else if (t % 2 == 0)
		 {//偶数为进里边
			 if (d % 2 != 0)
			 {//奇数进里
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