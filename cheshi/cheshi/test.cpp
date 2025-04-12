#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int z = 0, c = 0;
    for (int x1 = 0; x1 <= n; x1++) {
        for (int y1 = 0; y1 < m; y1++) {
            for (int x2 = x1; x2 < n; x2++) {
                for (int y2 = y1; y2 < m; y2++) {
                    if (x2 - x1 == y2 - y1) {
                        z++;
                    }
                    else c++;
                }
            }
        }
    }
    cout << z << ' ' << c;
    return 0;
}