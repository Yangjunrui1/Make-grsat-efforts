//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//const int N = 100010;
//int n, m;
//int a[N], s[N];
//int main() {
//	scanf("%d%d", &n, &m);
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int i = 1; i <= n; i++) {
//		s[i] = s[i - 1]+a[i];
//	}
//	while (m--) {
//		int L, R;
//		scanf("%d%d", &L, &R);
//		printf("%d\n", s[L] - s[R - 1]);
//	}
//	return 0;
//}
//#include<iostream>
//using namespace std;
//const int N = 10000;
//int main() {
//	int n, m, q;
//	scanf("%d%d%d", &n, &m, &q);
//	int arr[N][N], s[N][N];
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			scanf("%d", &arr[i][j]);
//		}
//	}for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + arr[i][j];
//		}
//	}
//	while (q--) {
//
//		int x1, y1, x2, y2;
//		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
//		printf("%d\n", s[x2][y2] - s[x1 - 1][y1] - s[x1][y1 - 1] + s[x1 - 1][y1 - 1]);
//	}
//	
//	return 0;
//}
#include<iostream>
const int N = 10000;
int a[N], b[N];
int n, m;
using namespace std;
void insert(int L, int R, int C) {
	b[L] += C;
	b[R + 1] -= C;
}
int main() {
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 1; i <= n; i++) {
		insert(i, i, a[i]);
	}
	while (m--) {
		int L, R, C;
		insert(L, R, C);
	}
	for (int i = 1; i <= n; i++) {
		b[i] += b[i - 1];
	}
	for (int i = 1; i <= n; i++) {
		printf("%d", b[i]);
	}
	return 0;
}