#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<map>//map�Ǽ�ֵ�ԣ����Զ��Ľ����еļ�ֵ�԰���С�����˳������
using namespace std;
int main()
{
	map<string, int> m;
	m["woerd"] = 3;
	m["hello"] = 4;//�Ǹ�����ĸ��Acllֵ���У��ͺ������ֵ�޹�
	
	cout << "hello ;" << m["hello"] << endl;
	for (auto P = m.begin(); P != m.end(); P++)
		cout<<P->first<<P->second<<endl;//�൱һ���ṹ��
	cout << m.size() << endl;//���m�ĳ���
	return 0;
}