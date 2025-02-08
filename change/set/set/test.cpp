#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<set>//引用头文件，自动按照从小到大的顺序排列
using namespace std;
int main()
{
	set<int> s;//创建集合
	s.insert(1);//插入元素
	s.insert(6);
	s.insert(3);
	for (auto P = s.begin(); P != s.end(); P++)//遍历集合
		cout << *P << "\n";
	cout << (s.find(3) != s.end()) << endl;//查找这个值
	cout << (s.find(4) != s.end()) << endl;
	s.erase(1);//删除这个元素
	for (auto P = s.begin(); P != s.end(); P++)//遍历集合
		cout << *P << "\n";
	return 0;
}