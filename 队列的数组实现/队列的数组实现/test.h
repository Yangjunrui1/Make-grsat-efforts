#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct Node* List;
typedef List Position;
List creatQueue(int x);
bool isEmpty(List P);
bool isFull(List P);
void disQueue(List P);//释放队列的内存空间
void makeEmpty(List P);//f
void enqueue(int x, List P);//进队
void dequeue(List P);//出队
int succ(int x, List P);//循环角标的计算
int front(List P);
int frontAnd(List P);
void print(List P);

