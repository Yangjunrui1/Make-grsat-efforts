#define _CRT_SECURE_NO_WARNINGS
#include"test.h"
struct Node
{
	int element;
	Position Next;	
};
Position createHeaderNode()//������ͷ���ƽڵ㣩
{
	Position P;
	P = malloc(sizeof(struct Node));
	if (P == NULL)
	{
		printf("�����ڴ�ʧ��");
		exit(1);//���������е����˳�����exit(0)�������г����˳�����
	}
	P->Next = NULL;
	return P;
}
bool isEmpty(List header)//�жϱ��Ƿ�Ϊ�ձ�
{
	return header->element != NULL;
}
void insertFirst(List header, int x)//�ӱ�ͷ����һ���ڵ�
{
	Position tmpcell;
	tmpcell = malloc(sizeof(struct Node));
	if (tmpcell == NULL)
	{
		printf("�ڴ�ռ䲻��\n");
		return;
	}
	tmpcell->element = x;
	tmpcell->Next = header->Next;
	header->Next = tmpcell;
	return;
}
void printList(List header)//��ӡ�������
{
	Position P;
	P = header->Next;
	while (P!= NULL)
	{
		printf("Node element = %d\n", P->element);
		P = P->Next;
	}
	return;
}
void insertLast(List header, int x)//��β������һ���ڵ�
{
	Position P,tmpcell;
	tmpcell = malloc(sizeof(struct Node));
	if (tmpcell == NULL)
	{
		printf("�ڴ�ռ䲻��\n");
		return;
	}
	P = header;
	tmpcell->element = x;
	tmpcell->Next = NULL;
	while (P->Next != NULL)
	{
		P = P->Next;
	}
	P->Next = tmpcell;
	return;
}
Position Find(List header, int x)//�ж����Ԫ���Ƿ����
{
	Position P;
	P = header->Next;
	while (P != NULL && P->element != x)
	{ 
		P = P->Next;
	}
	return P;
}
Position FindKth(List header,int x)
{
	Position P;
	P = header->Next;
	int count = 1;
	if (x <= 0)
	{
		printf("����Ϊ����\n");
		return NULL;
	}
	while (P != NULL)
	{
		if (count == x)
		{
			return P;
		}
		P = P->Next;
		count++;
	}
	return NULL;
}
void delete(List header, int x)//ɾ��ĳ���ڵ�
{
	Position P;
	P = header->Next;
	Position privious;
	privious = header;
	while (P != NULL)
	{
		if (P->element == x)
		{
			privious->Next = P->Next;
			free(P);
			break;
		}
		P = P->Next;
		privious = privious->Next;
	}
}
int size(List header)
{ 
	int count = 1;
	Position P = header->Next;
	while (P != NULL)
	{
		count++;
		P = P->Next;
	}
	return count;
}
int main()
{
	Position node;
	Position header;
	header = createHeaderNode();//������ͷ���ƽڵ㣩
	printf("List isEmpty?:%d\n",isEmpty(header));//�жϱ��Ƿ�Ϊ�ձ�
	printf("================\n");
	insertFirst(header, 1);//�ӱ�ͷ����һ������
	insertFirst(header, 2);
	printList(header);
	printf("================\n");
	insertLast(header, 3);//��β������һ���ڵ�
	insertLast(header, 5);
	printList(header);
	printf("================\n");
	node = Find(header, 1);//�ж����Ԫ���Ƿ����
	if (node == NULL)
	{
		printf("not find...\n");
	}
	else
		printf("find node element:%d\n", node->element);
	printf("===============\n");
	node = FindKth(header, 2);//���ҵڼ���
	if (node == NULL)
	{
		printf("not find...\n");
	}
	else
		printf("find:%d", node->element);
	delete(header, 3);
	printList(header);
	int ret = size(header);
	printf("�ڵ�ĸ�����%d\n", ret);
	return 0;
}
