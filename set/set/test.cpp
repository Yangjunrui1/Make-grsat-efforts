#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<set>//����ͷ�ļ����Զ����մ�С�����˳������
using namespace std;
int main()
{
	set<int> s;//��������
	s.insert(1);//����Ԫ��
	s.insert(6);
	s.insert(3);
	for (auto P = s.begin(); P != s.end(); P++)//��������
		cout << *P << "\n";
	cout << (s.find(3) != s.end()) << endl;//�������ֵ
	cout << (s.find(4) != s.end()) << endl;
	s.erase(1);//ɾ�����Ԫ��
	for (auto P = s.begin(); P != s.end(); P++)//��������
		cout << *P << "\n";
	return 0;
}