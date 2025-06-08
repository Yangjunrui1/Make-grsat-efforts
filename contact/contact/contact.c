#include "contact.h"
#pragma warning(disable:6064)
#define _CRT_SECURE_NO_WARNINGS
void Begincon(Cont* pc)
{
	pc->count = 0;
	memset(pc->date, 0, sizeof(pc->date));//初始化为零
}

void AddContract(Cont* pc)
{
	assert(pc);//判断是否为空
	if (pc->count == MAX) {
		printf("内存不足,添加失败\n");
		return;
	}
	printf("请输入名字\n");
	scanf_s("%s",pc->date[pc->count].name);
	printf("请输入性别\n");
	scanf_s("%s",pc->date[pc->count].sex);
	printf("请输入年龄\n");
	scanf_s("%d",&(pc->date[pc->count].age));//数组是一个整形变量，需要取地址
	printf("请输入电话\n");
	scanf_s("%s",pc->date[pc->count].tele);
	printf("请输入住址\n");
	scanf_s("%s",pc->date[pc->count].addr);
	pc->count++;
	printf("添加成功");
}

void show(const Cont* pc)
{
	assert(pc);
	int i = 0;
	printf("%20s\t%8s\t%5s\t%12s\t%20s\n", "名字", "性别", "年龄", "电话", "住址");
	for (i = 0; i < pc->count; i++) {
		printf("%20s\t%8s\t%3d\t%12s\t%20s\n", pc->date[i].name,  pc->date[i].name,pc->date[i].age, pc->date[i].tele, pc->date[i].addr);
	}
}
