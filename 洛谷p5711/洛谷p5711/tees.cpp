#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin >> x;
	int i = 5 * x;
	int j = 11 + 3 * x;
	if (i < j)
	{
		cout << "Local";
	}
	else
		cout << "Luogu";
	return 0;
}





//int x;
	//cin >> x;
	//if (x % 4 == 0 && x % 100 != 0 || x % 100 == 0 && x % 400 == 0)
	//	cout << 1;
	//else
	//	cout << 0;



//int x;
	//cin >> x;
	//if (x==1||x==0)
	//	printf("Today, I ate %d apple.", x);
	//else
	//	printf("Today, I ate %d apples.", x);
	//return 0;