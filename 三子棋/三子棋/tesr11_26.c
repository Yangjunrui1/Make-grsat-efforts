#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
//������Ϸ���߼�
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
		//�ж���Ӯ
		ret = win(ch, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	    computer(ch, ROW, COL);
		chessnum(ch, ROW, COL);
		//�ж���Ӯ
		ret = win(ch, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("��ϲ���ʤ��̫������\n");
	}
	else if(ret == '#')
	{
		printf("̫��ϧ�ˣ��ٽ�����\n");
	}
	else
	{
		printf("ƽ��\n");
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
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			game();
		}
			break;
		case 0:
			printf("��Ϸ����");
			break;
		default:
			printf("�������������ѡ��");

		}
	} while (input);
	return 0;
}