#include<bits/stdc++.h>
using namespace std;
int main() {
	char c=0;
	vector<int>arr;
	while (cin >> c && c != 'E') {
		if (c == 'W') {
			arr.push_back(1);
		}
		else if (c == 'L') {
			arr.push_back(0);
		}
	}
	if (arr.size() == 0) {
		cout << 0 << ':' << 0 << endl << endl << 0 << ':' << 0;
		return 0;
	}
	//首先是判断11分制的比赛结果
	int i = 0;
	int j = 0;
	for (int w = 0; w < arr.size(); w++) {
		
		if(arr[w] == 1) {
			i++;
		}
		else if(arr[w]==0) {
			j++;
		}
		if ((i >= 11 || j >= 11) && (abs(i - j) >= 2)) {
			cout << i << ':' << j << endl;
			i = 0, j = 0;
		}
	}if (i != 0 || j != 0) {
		cout << i << ':' << j << endl<<endl;
	}
	if (i == 0 && j == 0) {
		cout << endl;
	}
		
	i = 0; j = 0;
	for (int w = 0; w < arr.size(); w++) {

		if (arr[w] == 1) {
			i++;
		}
		else {
			j++;
		}
		if ((i >= 21 || j >= 21) && (abs(i - j) >= 2)) {
			cout << i <<':'<< j << endl;
			i = 0, j = 0;
		}
	}if (i != 0 || j != 0)
		cout << i << ':'<< j;
	return 0;
}