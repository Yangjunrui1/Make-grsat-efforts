#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<bitset>//类似一个字符数组
using namespace std;
int main()
{
	string m = "010101101";
	bitset<5>d(m, 0, 5);//从m的第0位获取5个元素
	bitset<5>b(19);
	cout << b << endl;
	for (int i = 0; i < b.size(); i++)
	{
		cout << b[i] << " ";
	}
	cout<<"是否有1:" << b.any() << endl;//判断是否有1
	cout << "是否不存在1：" << b.none() << endl;
	cout << "1的个数：" << b.count() << endl;
	cout << "b的大小" << b.size() << endl;
	cout << "下标为i的数值是否为1:" << b.test(1) << endl;
	b.flip(1);//第i位进行取反
	//b.flip();//所有位进行取反
	cout << b<<endl;
	b.reset(0);//归零操作
	unsigned long a = b.to_ulong();
	cout << a << endl;
	return 0;
}