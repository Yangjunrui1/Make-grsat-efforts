#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<map>//map是键值对，会自动的将所有的键值对按从小到大的顺序排列
using namespace std;
int main()
{
	map<string, int> m;
	m["woerd"] = 3;
	m["hello"] = 4;//是根据字母的Acll值排列，和后面的数值无关
	
	cout << "hello ;" << m["hello"] << endl;
	for (auto P = m.begin(); P != m.end(); P++)
		cout<<P->first<<P->second<<endl;//相当一个结构体
	cout << m.size() << endl;//输出m的长度
	return 0;
}