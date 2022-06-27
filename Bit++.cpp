//								Create by LeeWang
//  https://codeforces.com/contest/282/problem/A

#include <iostream>

using namespace std;

int main()
{
	int k, t = 0;
	cin >> k;
	string a;
	while (k--)
	{
		cin >> a;
		if (a[1] == '+' || a[2] == '+') t = t + 1;
		else t = t - 1;
	}
	cout << t;
}