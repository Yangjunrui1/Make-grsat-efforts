#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
//游戏代码的实现
void chessboard(char ch[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (j = 0; j < row; j++)
	{
		for (i = 0; i < col; i++)
		{
			ch[i][j] = ' ';
		}
	}
}
//比较垃圾的版本
/*void chessnum(char ch[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//打印数据
		printf(" %c | %c | %c \n", ch[i][0], ch[i][1], ch[i][2] );
		//打印分割信息
		if(i<row-1)
		printf("---|---|---\n");
	}
}*/
void chessnum(char ch[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//打印数据
		/*printf(" %c | %c | %c \n", ch[i][0], ch[i][1], ch[i][2]);*/
		int j = 0;
		for (j = 0; j < row; j++)
		{
			printf(" %c ", ch[i][j]);
			if(j<col-1)
			printf("|");
		}
		printf("\n");
		//打印分割信息
		// printf("---|---|---\n");
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if(j<col-1)
				  printf("|");
			}
			printf("\n");
		}
			
	}
}
void human(char ch[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家请下棋\n");
	while (1)
	{
		printf("请输入坐标\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (ch[x - 1][y - 1] == ' ')
			{
				ch[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("已有棋子请重新选择\n");
			}
		}
	else
		{
			printf("坐标非法请重新输入\n");
		}

	}
	
}
void computer(char ch[ROW][COL], int row, int col)
{
	printf("人机下棋\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (ch[x][y] == ' ')
		{
			ch[x][y] = '#';
			break;
		}
	}
}
int full(char ch[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (ch[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char win(char ch[ROW][COL], int row, int col)
{
	//行
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (ch[i][0] == ch[i][1] && ch[i][0] == ch[i][2]&&ch[i][1]!=' ')
		{
			return ch[i][1];
		}
	}
	//列
	int j = 0;
	for (j = 0; j < col; j++)
	{
		if (ch[0][j] == ch[1][j] && ch[1][j] == ch[2][j] && ch[1][j] != ' ')
		{
			return ch[1][j];
		}
	}
	//对角线
	if (ch[0][0] == ch[1][1] && ch[1][1] == ch[2][2] && ch[1][1] != ' ')
	{
		return ch[1][1];
	}
	if (ch[0][2] == ch[2][0] && ch[2][0] == ch[2][2] && ch[1][1] != ' ')
	{
		return ch[1][1];
	}
	//平局

	if (full(ch,row,col))
	{
		return 'q';
	}
	return 'c';

}