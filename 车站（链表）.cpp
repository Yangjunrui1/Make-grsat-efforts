#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

struct station { //station ��վ
	char name[20];
	int diat;
	station *next;
} *head;

station *input() { //��������ԭʼ����
	char site[][20] = {"ƽ����", "��ɽ", "��ҹɽ", "���ɽ", "�Ĵ�", "��¹ɽ", "����", "����", "����ԭ", "����¥"}; //վ��
	int di[10] = {0, 124, 342, 534, 546, 612, 675, 777, 856, 965};
	station *last, *p;
	head = last = (station *)malloc(sizeof(station)); //��̬�ڴ�ֲ�
	last->diat = di[0];
	strcpy(last->name, site[0]);
	for (int i = 1; i < 10; i++) {
		p = (station *)malloc(sizeof(station));
		strcpy(p->name, site[i]);
		p->diat = di[i];
		last->next = p;//��������
		last = p;//��֤lastʼ����ĩβ
	}
	last->next = NULL;
	return head;
}

void output() { //�����������
	station *p = head;
	printf("\n");
	while (p != NULL) {
		printf("%s -> ", p->name);
		p = p->next;
	}
	printf("\b\b\b\b    \n");
	printf("\n");
}

void insert() { //insert ���룬���
	station *p0, *p = head;
	p0 = (station *)malloc(sizeof(station));
	printf("����ص�����");
	scanf("%s", &p0->name);
	printf("������̣�");
	scanf("%d", &p0->diat);
	while (p->next != NULL && p->next->diat < p0->diat)
		p = p->next;
	p0->next = p->next ;
	p->next = p0;
}

void delec() {//ɾ��վ��
	char c[100];
	station *p1, *p2;

	p1 = head;
	printf("��������Ҫɾ����վ����:");
	scanf("%s", &c);

	while (p1 != NULL && strcmp(p1->name, c) != 0) {
		p2 = p1;
		p1 = p1->next;
	}
	if (p1 == NULL)
		printf("��վ�㲻����");
	else {
		if (p1 == head)
			head = p1->next;
		else {
			p2->next = p1->next ;//Խ����ɾ��վ��
			free(p1);//�ͷű�ɾ��վ����ڴ�ռ�
		}
	}
}

station *seek(char *s) {//ȡվ���ָ��
	station *p = head;
	for (p = head; p != NULL; p++)
		if (strcmp(p->name, s) == 0)
			return p;
}

void gap() {//������
	char s[100];
	station *p1, *p2;

	printf("������������㣺");
	scanf("%s", &s);
	p1 = seek(s);
	printf("�����������յ㣺");
	scanf("%s", &s);
	p2 = seek(s);
	int n = p1->diat - p2->diat ;
	n = n > 0 ? n : -n;
	printf("%d KM\n", n);
}

int main() {
	int x;
	head = input();
	do {
		printf("��1���������   ��2������ص�   ��3��ɾ��վ��   ��4����ѯ���ؼ��   ��0���˳�\n");
		printf("input:");
		scanf("%d", &x);
		switch (x) {
			case 1:
				output();
				break;
			case 2:
				insert();
				break;
			case 3:
				delec();
				break;
			case 4:
				gap();
				break;
		}
	} while (x != 0);
	return 0;
}