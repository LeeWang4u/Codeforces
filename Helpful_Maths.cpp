//								Create by LeeWang
//  https://codeforces.com/contest/339/problem/A

#include <iostream>
#include <cstring>

using namespace std;

bool KiemTra(char a, char b)
{
	int t1 = (int)a;
	int t2 = (int)b;
	if (t1 > t2 && t1 != 43 && t2 != 43)
	{
		return true;
	}
	else return false;
}

int main()
{
	string Math;
	cin >> Math;
	int t = Math.size();
	int temp;
	for (int i = 0; i < t; i++)
	{
		for (int j = i + 1; j < t; j++)
		{
			if (KiemTra(Math[i], Math[j]) == true)
			{
				temp = Math[i];
				Math[i] = Math[j];
				Math[j] = temp;
			}
		}
	}
	cout << Math;
}