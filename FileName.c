#define _CRT_SECURE_NO_WARNINGS

#include"stdio.h"
int main()
{
	int input = 0;
	printf("大学期间\n");
	printf("要好好学习吗(1/0)?");
	scanf("%d", &input);
	if (input == 1)
	{
		printf("好工作\n");
	}  
	else
	{
		printf("买皮鞋\n");
	}


	return 0;

}