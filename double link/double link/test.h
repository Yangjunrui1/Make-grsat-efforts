#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct Node* Position;
typedef Position List;
#define size 100
Position creatList();//创建一个空表
void insertFirst(List P, int x);
void insertLast(List P, int x);
bool isEmpty(List P);
int index(List P, int x);
void delete(List P, int x);//删除某个元素