#include "contact.h"
#pragma warning(disable:6064)
#define _CRT_SECURE_NO_WARNINGS
void Begincon(Cont* pc)
{
	pc->count = 0;
	memset(pc->date, 0, sizeof(pc->date));//��ʼ��Ϊ��
}

void AddContract(Cont* pc)
{
	assert(pc);//�ж��Ƿ�Ϊ��
	if (pc->count == MAX) {
		printf("�ڴ治��,���ʧ��\n");
		return;
	}
	printf("����������\n");
	scanf_s("%s",pc->date[pc->count].name);
	printf("�������Ա�\n");
	scanf_s("%s",pc->date[pc->count].sex);
	printf("����������\n");
	scanf_s("%d",&(pc->date[pc->count].age));//������һ�����α�������Ҫȡ��ַ
	printf("������绰\n");
	scanf_s("%s",pc->date[pc->count].tele);
	printf("������סַ\n");
	scanf_s("%s",pc->date[pc->count].addr);
	pc->count++;
	printf("��ӳɹ�");
}

void show(const Cont* pc)
{
	assert(pc);
	int i = 0;
	printf("%20s\t%8s\t%5s\t%12s\t%20s\n", "����", "�Ա�", "����", "�绰", "סַ");
	for (i = 0; i < pc->count; i++) {
		printf("%20s\t%8s\t%3d\t%12s\t%20s\n", pc->date[i].name,  pc->date[i].name,pc->date[i].age, pc->date[i].tele, pc->date[i].addr);
	}
}
