#define _CRT_SECURE_NO_WARNINGS
#include"test.h"
struct Node
{
	int element;
	Position Next;	
};
Position createHeaderNode()//创建表头（哑节点）
{
	Position P;
	P = malloc(sizeof(struct Node));
	if (P == NULL)
	{
		printf("申请内存失败");
		exit(1);//非正常运行导致退出程序。exit(0)正常运行程序并退出程序
	}
	P->Next = NULL;
	return P;
}
bool isEmpty(List header)//判断表是否为空表
{
	return header->element != NULL;
}
void insertFirst(List header, int x)//从表头插入一个节点
{
	Position tmpcell;
	tmpcell = malloc(sizeof(struct Node));
	if (tmpcell == NULL)
	{
		printf("内存空间不足\n");
		return;
	}
	tmpcell->element = x;
	tmpcell->Next = header->Next;
	header->Next = tmpcell;
	return;
}
void printList(List header)//打印这个链表
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
void insertLast(List header, int x)//从尾部插入一个节点
{
	Position P,tmpcell;
	tmpcell = malloc(sizeof(struct Node));
	if (tmpcell == NULL)
	{
		printf("内存空间不足\n");
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
Position Find(List header, int x)//判断这个元素是否存在
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
		printf("不能为负数\n");
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
void delete(List header, int x)//删除某个节点
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
	header = createHeaderNode();//创建表头（哑节点）
	printf("List isEmpty?:%d\n",isEmpty(header));//判断表是否为空表
	printf("================\n");
	insertFirst(header, 1);//从表头插入一个数据
	insertFirst(header, 2);
	printList(header);
	printf("================\n");
	insertLast(header, 3);//从尾部插入一个节点
	insertLast(header, 5);
	printList(header);
	printf("================\n");
	node = Find(header, 1);//判断这个元素是否存在
	if (node == NULL)
	{
		printf("not find...\n");
	}
	else
		printf("find node element:%d\n", node->element);
	printf("===============\n");
	node = FindKth(header, 2);//查找第几个
	if (node == NULL)
	{
		printf("not find...\n");
	}
	else
		printf("find:%d", node->element);
	delete(header, 3);
	printList(header);
	int ret = size(header);
	printf("节点的个数：%d\n", ret);
	return 0;
}
