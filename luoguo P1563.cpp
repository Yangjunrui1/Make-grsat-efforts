#include <bits/stdc++.h>
using namespace std;
int N = 9999;

int main() {
	int arr[N] = {0};
	char name[] = {0};
	int Hash[N][3] = {0};
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		scanf("%d%s", &arr[i], &name[i]);
	}
	cout << name[2];
	for (int i = 1; i <= n; i++) {
		cin >> Hash[i][1] >> Hash[i][2];
	}

	return 0;
}