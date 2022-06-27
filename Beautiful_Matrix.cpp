//								Create by LeeWang
//  https://codeforces.com/contest/263/problem/A

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int arr[5][5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> arr[i][j];
		}
	}
	int t = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[i][j] == 1)
			{
				if (i == 2)
				{
					t = abs(2 - j);
				}
				else if (i == 1 || i == 3)
				{
					t = 1 + abs(2 - j);
				}
				else {
					t = 2 + abs(2 - j);
				}
			}
		}
	}
	cout << t;

}