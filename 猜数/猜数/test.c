#include"stdio.h"
#include"stdlib.h"
void menu()
{
	printf("**********************************\n");
	printf("************* 1.play  ************\n");
	printf("************* 0.exit  ************\n");
	printf("**********************************\n");
}
void game()
{
	RAND_MAX;
	int ret = rand();
	printf("%d\n",ret);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			printf("������\n");
				break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��");

		}

	} while (input);
	return 0;
}