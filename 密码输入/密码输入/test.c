#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	printf("����������\n");
	char ch[30] = { "abeasd" };
	char ch1[30] = { 0 };

	for (int i = 0; i <= 3; i++) {
		gets(ch1);
		if (strcmp(ch, ch1) == 0) {//�����ַ����Ƿ���ȣ�
			puts("������ȷ \n");

			break;
		}
		else {
			printf("�������\n�㻹��%d����\n", 3 - i);
		}
	}

	return 0;
}