#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3
//��ʼ������
void chessboard(char ch[ROW][COL], int row, int col);

//��ӡ����
void chessnum(char ch[ROW][COL], int row, int col);

//��������
void human(char ch[ROW][COL], int row, int col);

//��������
void computer(char ch[ROW][COL], int row, int col);

//�ж���Ӯ
char win(char ch[ROW][COL], int row, int col);
