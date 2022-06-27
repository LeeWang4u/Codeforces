//								Create by LeeWang
//  https://codeforces.com/contest/112/problem/A
#include <iostream>

using namespace std;

int Tinh(char a)
{
	int t = 0;
	t = (int)a;
	if (t < 95)
	{
		t = t + 32;
		return t;

	}
	else return t;

}

int main()
{
	string a, b;
	cin >> a >> b;
	int t1 = a.size();
	int t2 = 0;
	int a1 = 0, a2 = 0;
	for (int i = 0; i < t1; i++)
	{
		a1 = a1 + Tinh(a[i]);
		a2 = a2 + Tinh(b[i]);
		if (Tinh(a[i]) > Tinh(b[i]))
		{
			cout << "1";
			t2 = 1;
			break;
		}
		else if (Tinh(a[i]) < Tinh(b[i]))
		{
			cout << "-1";
			t2 = 1;
			break;
		}
	}

	if (t2 == 0) cout << "0";


}