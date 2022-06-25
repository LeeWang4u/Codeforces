#include <iostream>
#include <string.h>
#include <iomanip>
#include <math.h>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int test;
	cin >> test;
	while (test--) {
		vector<long long > arr;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			long long a;
			cin >> a;
			arr.push_back(a);
		}
		sort(arr.begin(), arr.end());
		vector<long long> vec;
		long long a = arr[0] * arr[1] * arr[2] * arr[3] * arr[n - 1];
		vec.push_back(a);
		long long b = arr[0] * arr[1] * arr[2] * arr[n - 1] * arr[n - 2];
		vec.push_back(b);
		long long c = arr[0] * arr[1] * arr[n - 1] * arr[n - 2] * arr[n - 3];
		vec.push_back(c);
		long long d = arr[0] * arr[n - 1] * arr[n - 2] * arr[n - 3] * arr[n - 4];
		vec.push_back(d);
		long long e = arr[n - 1] * arr[n - 2] * arr[n - 3] * arr[n - 4] * arr[n - 5];
		vec.push_back(e);
		long long f = arr[0] * arr[1] * arr[2] * arr[3] * arr[4];
		vec.push_back(f);
		sort(vec.begin(), vec.end());
		cout << vec[vec.size() - 1];
		//  -_-
		cout << endl;
	}

	
}

