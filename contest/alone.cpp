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


int main() {
	FAST();
	int testcase;
	cin >> testcase;
	while (testcase--) {
		//________________
		int n;
		cin >> n;
		vector<int> arr;
		for (int i = 0; i < n; i++)
		{
			int a; cin >> a;
			arr.push_back(a);
		}
		arr.push_back(12345678);
		sort(arr.begin(), arr.end());
		int s = 0, index = 0, temp = 0;
		for (int i = 0; i < n; i++){
			if (arr[i] != arr[i + 1]) {
				if (index % 2 == 0) {
					s = s - temp;
				}
				else s = s + temp;
				index++;
				temp = 0;
			}
			else {
				temp++;
			}
		}
		for (int i = 0; i < arr.size()-1; i++)
		{
			if (arr[i] == arr[i + 1]) {
				arr.erase(arr.begin() + i + 1);
			}
		}
		
		cout << arr.size() - abs(s)-1;
		//____________
		cout << endl;
	}
}