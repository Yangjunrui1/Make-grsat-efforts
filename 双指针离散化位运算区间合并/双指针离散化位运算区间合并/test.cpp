#define _CRT_SECURE_NO_WARNINGS
//双指针应用简单举例
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
//查找一个序列无重复的最长子序列 
//暴力的解法
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
//		while (s[a[i]] > 1) {//如果这个数出现了第二次
//			s[a[j]]--;
//			j++;//当j==i时候。循环就结束了
//		}
//		res = max(res, i - j + 1);//比较新的这个序列与之前的谁大 
//	}
//	cout << res << endl;
//	return 0;
//}

//位运算
