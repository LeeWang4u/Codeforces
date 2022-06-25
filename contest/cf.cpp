#include <iostream>
#include <string.h>
#include <iomanip>
#include <math.h>
#include <vector>
#include <algorithm>
#include <stack>
#define ahihi int main()
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;



ahihi{
	FAST;
	long long n;
	vector<long long> arr;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		arr.push_back(a);
		
	 }

	
	/*
	sort(arr.begin(), arr.end());
	for (int i = 0; i < arr.size(); i++)
	{
		for (int j = i + 1; j < arr.size(); j++) {
			if (arr[i] + arr[j] <= k) {
				ans++;
			}
			else {
				break;
			}
		}
		if (arr[i] * 2 > k) {
			break;
		}
	}
	cout << ans;

	*/

}