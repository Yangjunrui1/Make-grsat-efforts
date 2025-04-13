//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//	int n, m;
//	cin >> n >> m;
//	double score=0;
//	
//	for (int i = 0; i < n; i++) {
//		int max=-999, min=99;
//		int sum = 0;
//		for (int j = 0; j < m; j++) {
//			int tmp;
//			cin >> tmp;
//			sum += tmp;
//			if (tmp > max) {
//				max = tmp;
//			}
//			if (tmp < min) {
//				min = tmp;
//			}
//		}
//		double tmo = (sum - (min + max))*1.0/ (m - 2);
//		if (tmo > score) {
//			score = tmo;
//		}
//	}
//	printf("%.2lf", score);
//	return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//struct student
//{
//	string name;
//	int ch;
//	int mo;
//	int en;
//}stu[100];
//int main() {
//	int n, max = 0,id=0;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> stu[i].name >> stu[i].ch >> stu[i].mo >> stu[i].en;
//		int tmp = stu[i].ch + stu[i].mo + stu[i].en;
//		if (tmp > max) {
//			max = tmp;
//			id = i;
//		}
//	}
//	cout<< stu[id].name <<' ' << stu[id].ch << ' ' << stu[id].mo << ' ' << stu[id].en;
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	int a[400];
	int flag=0;
	for (int i = 0; i < s.size(); i++) {
		a[i] = (int)(s[i] - '0');
		if (s[i] == '.') {
			flag = 1;
			a[i] = 10;
		}if (s[i] == '/') {
			flag = 2;
			a[i] = 10;
		}if (s[i] == '%') {
			flag = 3;
			a[i] = 10;
		}
	}
	int b = sizeof(a) / sizeof(int);
	switch (flag)
	{
		case 0:
		for (int i = sizeof(a) / sizeof(int) - 1; i >= 0; i--) {
			cout << a[i];
		}break;
		case 1:
		for (int i = 0; i <= sizeof(a) / sizeof(int) - 1; i++) {
			if (a[i] == 10) {
				cout << '.';
				continue;
			}if (a[i] != 0)
			cout << a[i];
		}break;
		case 2:
		for (int i = 0; i <= sizeof(a) / sizeof(int) - 1; i++) {
			if (a[i] == 10) {
				cout << '/';
				continue;
			}if(a[i]!=0)
			cout << a[i];
		}break;
		case 3:
		for (int i = sizeof(a) / sizeof(int) - 1; i >= 0; i--) {
			if (a[i] == 10) {
				cout << '.';
				continue;
			}if (a[i] != 0)
			cout << a[i];
		}break;
	
	default:
		break;
	}
	return 0;
}