//#include<bits/stdc++.h>
//using namespace  std;
//int Hash[8] = { 0 };
//int main()
//{
//	int a,b;
//	vector<int> h;
//	for (int i = 1;i<=7;i++)
//	{
//		cin >> a >> b;
//		h.push_back(a + b);
//		if (a+b>8)
//		{
//			Hash[i] = 1;
//		}
//	}
//	int j = 0;
//	for (int i = 1;i<=7;i++)
//	{
//		if (Hash[i])
//		{
//			if (j==0)
//			{
//				j = i;
//			}
//			if (h[j-1] < h[i-1])
//			{
//				j = i ;
//			}
//		}
//	}
//	cout << j;
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x, b;
	cin >> x >> b;
	switch (b)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << 30;
		break;
	case 2:
		if (x % 4 == 0 && x % 100 != 0 || x % 100 == 0 && x % 400 == 0)
			cout << 29;
		else
			cout << 28;
	}
	return 0;
}