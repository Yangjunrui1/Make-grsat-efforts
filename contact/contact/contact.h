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
	char tele[12];//�绰����
	char addr[30];//��ͥסַ
}Peo;

typedef struct Cont
{
	Peo date[MAX];//����һ����СΪ100�Ľṹ������
	int count;//��¼�����ĸ���
}Cont;

void Begincon(Cont* pc);//��ʼ��ͨѶ¼
void AddContract(Cont* pc);//������ϵ����Ϣ
void show(const Cont* pc);//չʾͨѶ¼���ݣ����޸ģ���const����