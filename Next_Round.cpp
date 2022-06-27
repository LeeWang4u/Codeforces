//								Create by LeeWang
//  https://codeforces.com/contest/158/problem/A

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int k;
	int a, b, t = 0;

	cin >> k >> a;
	vector<int> arr;
	for (size_t i = 0; i < k; i++)
	{
		cin >> b;
		arr.push_back(b);
	}
	for (size_t i = 0; i < k; i++)
	{
		if (arr[i] >= arr[a - 1] && arr[i] != 0)
		{
			t = t + 1;
		}
	}
	cout << t;
}