#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	printf("请输入密码后会判断安全性\n");
	int n = 0;
	scanf("%d", &n);
	while (n--)
	{
		char str[30] = { 0 };
		int num[4] = { 0 };
		scanf("%s", str);
		int len = strlen(str);
		if (len >= 8 && len <= 16)
		{
			for (int i = 0; i < len; i++)
			{
				if (str[i] >= '0' && str[i] <= '9')
					num[0]++;
				if (str[i] >= 'a' && str[i] <= 'z')
					num[1]++;
				if (str[i] >= 'A' && str[i] <= 'Z')
					num[2]++;
				if (str[i] == '~' || str[i] == '@' || str[i] == '!' || str[i] == '#' || str[i] == '%' || str[i] == '^' || str[i] == '$' )
					num[3]++;
			}
			int sum = 0;
			for (int i = 0; i < 4; i++)
			{
				if (num[i] == 0)
					sum++;
			}
			if (sum >= 2)
				printf("No\n");
			if (sum < 2)
				printf("Yes\n");

		}
	}
	return 0;
}