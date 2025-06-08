#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"contact.h"
void meun() {
	printf("****************************************\n");
	printf("**********1.add      2 del**************\n");
	printf("**********3.search   4  modify *********\n");
	printf("**********5,show     6,sort ************\n");
	printf("**********0 exit ***********************\n");
}
int main() {
	int input = 0;
	Cont con;
	Begincon(&con);//初始化通讯录

	do
	{
		meun();
		printf("请选择：->");
		scanf_s("%d", &input);
		switch(input)
		{
			case 1:
				AddContract(&con);
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				show(&con);
				break;
			case 6:
				break;
			case 0:
				printf("退出\n");
				break;
			default:
				printf("输入错误，请重新输入\n");
				break;
		}
		
	} while (input);
}