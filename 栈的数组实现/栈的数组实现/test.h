#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MinStackSize 5
#define EmptyTos -1
typedef struct Node* List;
typedef List Position;
bool isFull(List S);//�ж�ջ�Ƿ���  
bool isEmpty(List S);//�ͷ�ջ���ڴ�
void disposeStack(List S);
void makeEmpty(List S);
void Push(int x, List S);
int topAndPop(List S);//����ջ������ֵ��ɾ��
void printStack(List S);//��ӡջ
