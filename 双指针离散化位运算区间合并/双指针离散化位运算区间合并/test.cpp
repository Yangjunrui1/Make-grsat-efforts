#define _CRT_SECURE_NO_WARNINGS
//˫ָ��Ӧ�ü򵥾���
//#include<iostream>
//using namespace std;
//int main() {
//	char str[1000];
//	gets_s(str);
//	int n = strlen(str);
//	for (int i = 0; i < n; i++) {
//		int j = i;
//		while (j < n && str[j] != ' ') {
//			j++;
//		}for (int k = i; k < j; k++) {
//			cout << str[k];
//		}
//		cout << endl;
//		i = j; 
//	}
//	return 0;
//}
//����һ���������ظ���������� 
//�����Ľⷨ
//for (int i = 0; i < n; i++) {
//	for (int j = 0; j <= i; j++) {
//		if (check(j, i)) {
//			res = max(res, j - i + 1);
//		}
//	}
//}


//#include<iostream>
//using namespace std;
//const int N = 100010;
//int n;
//int a[N], s[N];
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	int res = 0;
//	for (int i = 0, j = 0; i < n; i++) {
//		s[a[i]]++;
//		while (s[a[i]] > 1) {//�������������˵ڶ���
//			s[a[j]]--;
//			j++;//��j==iʱ��ѭ���ͽ�����
//		}
//		res = max(res, i - j + 1);//�Ƚ��µ����������֮ǰ��˭�� 
//	}
//	cout << res << endl;
//	return 0;
//}

//λ����
