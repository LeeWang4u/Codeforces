#include <iostream>
#include <vector>
#include <cstring>
#include <cmath>

using namespace std;


int main() {
	int test;
	cin >> test;
	while (test--) {
		int x, y, a, b;
		cin >> x >> y;
		if (x > y || y % x != 0) cout << "0 0" << endl;
		else if (x == y) cout << "1 1" << endl;
		else if (x == 1) cout << "1 " << y << endl;
		else {
			int t = 0;
			y = y / x;
			int c = 2;
			int d = 0;
			for (int i = 2; i <= y; i++)
			{
				if (y % i == 0) {

					
					while (t <= y) {
						t = pow(i, c);
						
						if (t == y) {
							d++;
							a = i;
							break;
						}
						c++;
					}
				}
				if (d != 0) {
					break;
				}
			}
			cout << c << " " << a << endl;
		}
	}
}

/*

int main() {
	int t;
	cin >> t;
	while (t--) {
		int arr[150][150];
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> arr[i][j];
			}
		}
		
		for (int i = 0; i < n; i++)
		{
			if (i % 2 != 0) {
				for (int j = 0; j < n/2; j++)
				{
					int temp = 0;
					temp = arr[i][j];
					arr[i][j] = arr[i][n - j - 1];
					arr[i][n - j - 1] = temp;
				}

			}
			
				 
			
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (j == n - 1) cout << arr[i][j];
				else cout << arr[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
}

*/