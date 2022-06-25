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
	while (test--) {
		int n, m;
		cin >> n >> m;
		int sum = 0;
		string s;
		for (int i = 0; i < n; i++)
		{
			string a;
			cin >> a;
			s += a;
		}
		int a = m;
		for (int i = 0; i < n-1; i++)
		{
			for (int j = 0; j < m; j++) {
				sum = sum + abs((int)s[j] - (int)s[a]);
				a++;
			}
		
		}
		cout << sum << endl;
		
		
	}
}



