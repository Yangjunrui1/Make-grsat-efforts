#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	cin.ignore();
	char ch[200] = {0};
	char c = 'z';
	int i = 0;
	while (cin.get(c)&&c!='\n')
	{
		ch[i++] = c;
	}
	ch[i] = '\0';
	for (int j = 0; j < strlen(ch); j++)
	{
		if (islower(ch[j])) { // ������Сд��ĸ
			ch[j] = 'a' + (ch[j] - 'a' + n) % 26;
			if (ch[j] < 'a') { // ������ƫ��
				ch[j] += 26;
			}
		}
	}
	cout << ch;
	return 0;
}