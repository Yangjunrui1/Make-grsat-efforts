#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
//测试游戏的逻辑
void meun()
{
	printf("----------------------------\n");
	printf("-------1,play 0,exit--------\n");
	printf("----------------------------\n");
}
void game()
{
	char ret;
	char ch[ROW][COL] = { 0 };
	chessboard(ch,ROW,COL);
	chessnum(ch, ROW, COL);
	while(1)
	{
		human(ch,ROW,COL);
		chessnum(ch, ROW, COL);
		//判断输赢
		ret = win(ch, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	    computer(ch, ROW, COL);
		chessnum(ch, ROW, COL);
		//判断输赢
		ret = win(ch, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("恭喜你获胜，太厉害了\n");
	}
	else if(ret == '#')
	{
		printf("太可惜了，再接再厉\n");
	}
	else
	{
		printf("平局\n");
	}
	chessnum(ch, ROW, COL);

}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		meun();
		printf("请选择");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			game();
		}
			break;
		case 0:
			printf("游戏结束");
			break;
		default:
			printf("输入错误请重新选择");

		}
	} while (input);
	return 0;
}