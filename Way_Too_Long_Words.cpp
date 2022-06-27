//								Create by LeeWang
//  https://codeforces.com/contest/71/problem/A

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int k, t;
	string a;
	cin >> k;
	while (k--)
	{
		cin >> a;
		t = a.size();
		if (t <= 10)
		{
			cout << a;
			cout << endl;
		}
		else
		{
			cout << a[0] << t - 2 << a[t - 1];
			cout << endl;
		}
	}
}