#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct Node* Position;
typedef Position List;
struct Node* createHeaderNode();
void insertFirst(List header, int x);//从链表的头部进入
void insertLast(List header, int x);//从链表的尾部插入
Position Find(List header, int x);//查找位置根据值 查找，返回节点的位置
Position FindKth(List header, int posi);//查找其为第几个节点
void delete(List header, int x);//删除某个元素
bool isEmpty(List header);//判断是否为空
int size(List header);//统计链表中节点的个数
void printList(List hesder);//依次打印这个链表

