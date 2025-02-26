//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin >>n;
//	double a, b;
//	int j = 0;
//	for (int i =1;i<=7;i++)
//	{
//		cin >> a >> b;
//		int tmp;
//		tmp =ceil(n / a)*b;
//		if (j==0)
//		{
//			j = tmp;
//		}
//		if (tmp<j)
//		{
//			j = tmp;
//		}
//	}
//	cout << j;
//
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	
//	int t;
//	if (a < b)    /*如果a大于b,借助中间变量t实现a与b值的互换*/
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)    /*如果a大于c,借助中间变景t实现a与c值的互换*/
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c)    /*如果b大于c,借助中间变量t实现b与c值的互换*/
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	if (!(a+b>c&&a+c>b&&b+c>a))
//	{
//		cout << "Not triangle" << endl;
//		return 0;
//	}
//	
//	if (b*b+c*c==a*a)
//	{
//		cout << "Right triangle"<<endl;
//	}
//	else if (b*b +c*c<a*a)
//	{
//		cout << "Obtuse triangle"<<endl;
//	}
//	else
//	{
//		cout << "Acute triangle"<<endl;
//	}
//	if (a == b||a==c||b ==c)
//	{
//		cout << "Isosceles triangle"<<endl;
//	}
//	if (a==b&&a==c)
//	{
//		cout << "Equilateral triangle"<<endl;
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a;
//	cin >> a;
//	double m = 0;
//	if (a<=150)
//	{
//		m = 0.4463 * a;
//	}
//	if (a>150&&a<=400)
//	{
//		m = 150 * 0.4463 + (a - 150) * 0.4663;
//	}
//	if (a>400)
//	{
//		m = 150 * 0.4463 + (400 - 150) * 0.4663+(a-400)*0.5663;
//	}
//	cout << setprecision(1) <<fixed<< m;
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int>a;
	vector<char>b;
	char c;
	for (int i =0;i<13;i++ )
	{
		cin >> c;
		b.push_back(c);
		if (c>='0'&&c<='9')
		{
			int tmp = c -'0';
			a.push_back(c - '0');
		}
	}
	int sum=0;
	for (int i = 0;i<9;i++)
	{
		sum  += a[i] * (i + 1);
	}
	int check = sum % 11;
	char d = b.back();
	bool is = false;
	if (check == 10)
	{
		is = (d == 'X');
	}
	else
	{
		is = (d - '0' == check);
	}
	if (is)
	{
		cout << "Right";
	}
	else
	{
		for (int i =0;i<12;i++)
		{
			cout << b[i];
		}
		if (check ==10)
		{
			cout << 'X';
		}
		else
		{
			cout << check;
		}
	}
	return 0;
}
