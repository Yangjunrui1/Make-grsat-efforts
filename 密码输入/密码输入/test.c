#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	printf("请输入密码\n");
	char ch[30] = { "abeasd" };
	char ch1[30] = { 0 };

	for (int i = 0; i <= 3; i++) {
		gets(ch1);
		if (strcmp(ch, ch1) == 0) {//两个字符串是否相等；
			puts("密码正确 \n");

			break;
		}
		else {
			printf("密码错误\n你还有%d机会\n", 3 - i);
		}
	}

	return 0;
}