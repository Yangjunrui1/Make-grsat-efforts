#pragma once
#include<string.h>
#include<stdio.h>
#include<assert.h>
#define MAX 100
typedef struct People
{
	char name[20];
	int age;
	char sex[10];
	char tele[12];//电话号码
	char addr[30];//家庭住址
}Peo;

typedef struct Cont
{
	Peo date[MAX];//创建一个大小为100的结构体数组
	int count;//记录人数的个数
}Cont;

void Begincon(Cont* pc);//初始化通讯录
void AddContract(Cont* pc);//增加联系人信息
void show(const Cont* pc);//展示通讯录内容，不修改，加const保护