#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<bitset>//����һ���ַ�����
using namespace std;
int main()
{
	string m = "010101101";
	bitset<5>d(m, 0, 5);//��m�ĵ�0λ��ȡ5��Ԫ��
	bitset<5>b(19);
	cout << b << endl;
	for (int i = 0; i < b.size(); i++)
	{
		cout << b[i] << " ";
	}
	cout<<"�Ƿ���1:" << b.any() << endl;//�ж��Ƿ���1
	cout << "�Ƿ񲻴���1��" << b.none() << endl;
	cout << "1�ĸ�����" << b.count() << endl;
	cout << "b�Ĵ�С" << b.size() << endl;
	cout << "�±�Ϊi����ֵ�Ƿ�Ϊ1:" << b.test(1) << endl;
	b.flip(1);//��iλ����ȡ��
	//b.flip();//����λ����ȡ��
	cout << b<<endl;
	b.reset(0);//�������
	unsigned long a = b.to_ulong();
	cout << a << endl;
	return 0;
}