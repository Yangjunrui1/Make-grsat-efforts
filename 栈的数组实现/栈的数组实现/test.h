#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MinStackSize 5
#define EmptyTos -1
typedef struct Node* List;
typedef List Position;
bool isFull(List S);//判断栈是否满  
bool isEmpty(List S);//释放栈的内存
void disposeStack(List S);
void makeEmpty(List S);
void Push(int x, List S);
int topAndPop(List S);//返回栈顶的数值并删除
void printStack(List S);//打印栈
