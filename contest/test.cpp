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
		vector<int> arr;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			int a;
			cin >> a;
			arr.push_back(a);
		}
		int a = 1;
		int t = 0;
		int c = 0;
		while ( a ) {
			for (int  i = 0; i < n-1; i++)
			{
				if (arr[i] < arr[i + 1]) c = c + 1;
				
					
				if (i !=0 && arr[i+1] == 1) {
					a = 0;
					t = -1;
					break;
				}
				if (arr[i ] >= arr[i+1]) {
					//int b = arr[i ] / arr[i+1];
					arr[i] = arr[i] / 2; //(b+1);
					t = t + 1;
				}
			}
			if (t == 0 || a== 0 || t == -1 || c == n-1) {
				a = 0;
				break;
				
			}
			c = 0;
			

		}
		if (n == 1) cout << "0" << endl;
		else if ( t == -1) cout << "-1" << endl;
		else cout << t << endl;
	}

}