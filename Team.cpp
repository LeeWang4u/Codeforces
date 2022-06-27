//								Create by LeeWang
//  https://codeforces.com/contest/231/problem/A

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int k;
	int a, b, c, t, tong = 0;
	cin >> k;
	while (k--)
	{
		t = 0;
		cin >> a >> b >> c;
		t = a + b + c;

		if (t > 1)
		{
			tong = tong + 1;
		}
	}
	cout << tong;
}
