#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	getchar();
	while (n--){
		stack<char>s;
		while (true) {
			char ch = getchar();//一次读入一个字符
			if (ch == ' ' || ch == '\n' || ch == EOF) {
				while (!s.empty()) {
					cout << s.top();
					s.pop();
				}
			}
			else
				s.push(ch);
		}
		cout << endl;
	}
	return 0;
}