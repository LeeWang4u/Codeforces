#include <iostream>
#include <string.h>
#include <iomanip>
#include <math.h>
#include <vector>
#include <algorithm>
#define ahihi int main()
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;





ahihi{
	FAST;
int test;
cin >> test;
while (test--)
{
	long long n;
	long long t1 = 0, t2 = 0, t = 0;
	cin >> n;
	if (n % 2 != 0 || n < 4) cout << "-1" ;
	else {
		long long a = n;
		if (a % 4 == 0) {
			t = a / 4;
		}
		else {
			while (a) {
				if (a % 6 == 0) {
					t += a / 6;
					break;
				}
				else if (a % 4 == 0) {
					t++;
					a = a - 4;
				}
				if (a < 4 && a>0) {
					t = 0;
					break;
				}
			}
		}
		
		a = n;
		if (a % 6 == 0) t1 = a / 6;
		else {
			while (a) {
				if (a % 4 == 0) {
					t1 += a / 4;
					break;
				}
				else if (a % 6 == 0) {
					t1++;
					a = a - 6;
				}
				if (a < 6 && a>0) {
					t1 = 0;
					break;
				}
			}
		}
		

		vector<long long> arr;
		arr.push_back(t);
		arr.push_back(t1);
		sort(arr.begin(), arr.end());
		for (int i = 0; i < arr.size(); i++)
		{
			if (arr[i] != 0) {
				cout << arr[i] << " ";
				break;
			}

		}
		for (int i = arr.size() - 1; i >= 0; i--)
		{
			if (arr[i] != 0) {
				cout << arr[i] << " ";
				break;
			}
		}
		/*
			vector<long long> arr;
			arr.push_back(t);
			arr.push_back(t1);
			arr.push_back(t2);
			sort(arr.begin(), arr.end());
			for (int i = 0; i < 3; i++)
			{
				if (arr[i] != 0) {
					cout << arr[i] << " ";
					break;
				}
			}
			for (int i = 2; i >= 0; i--)
			{
				if (arr[i] != 0) {
					cout << arr[i] << endl;
					break;
				}
			}


		}
		*/
	}
	cout << endl;
}
}