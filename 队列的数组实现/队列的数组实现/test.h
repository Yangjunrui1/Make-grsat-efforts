#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct Node* List;
typedef List Position;
List creatQueue(int x);
bool isEmpty(List P);
bool isFull(List P);
void disQueue(List P);//�ͷŶ��е��ڴ�ռ�
void makeEmpty(List P);//f
void enqueue(int x, List P);//����
void dequeue(List P);//����
int succ(int x, List P);//ѭ���Ǳ�ļ���
int front(List P);
int frontAnd(List P);
void print(List P);

