#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	float x, y, a;
//	for (y = 1.5; y > -1.5; y -= 0.1)
//	{
//		for (x = -1.5; x < 1.5; x += 0.05)
//		{
//			a = x * x + y * y - 1;
//			putchar(a * a * a - y * y * y * x * x <= 0.0 ? '*' : ' ');
//		}
//		system("color 0c");
//		putchar('\\n');
//	}
//	return 0;
//}

#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>

int main()
{
    float x, y, a;
    for (y = 1.5f; y > -1.5f; y -= 0.1f)
    {
        for (x = -1.5f; x < 1.5f; x += 0.05f)
        {
            a = x * x + y * y - 1;
            putchar(a * a * a -  x * x * y * y * y <= 0.0f ? '9' : ' ');
        }
        system("color Fc");
        putchar('\n');
    }
    return 0;
}