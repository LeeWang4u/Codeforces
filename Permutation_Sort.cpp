//								Create by LeeWang
//   https://codeforces.com/contest/1525/problem/B

#include <iostream>
#include <string.h>
#include <iomanip>
#include <math.h>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <sstream>
#define  endl           '\n'
const long long MOD = 1e9 + 7;
using namespace std;

void FAST() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
}

bool checkSort(int n, vector<int> arr) {
	for (int i = 0; i < n-1; i++)
	{
		if (arr[i] > arr[i + 1]) {
			return false;
		}
	}
	return true;
}

int main() {
	FAST();
	int testcase;
	cin >> testcase;
	while (testcase--) {
		//________________
		vector<int> arr;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			int a;
			cin >> a;
			arr.push_back(a);
		}
		int count = 0;
		while (1) {
			if (checkSort(n, arr) == true) {
				break;
			}
			else {
				if (arr[0] != 1 && arr[n-1] !=1) {
					sort(arr.begin(), arr.end() - 1);
				}
				else {
					sort(arr.begin() +1, arr.end());
				}
				count++;
			}
		}
		cout << count++;
		//____________
		cout << endl;
	}
}