#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {

	long long n;
	cin >> n;
	long long* arrx = new long long[n];
	long long* arry = new long long[n];
	for (int i = 0; i < n; i++) {
		cin >> arrx[i];
		cin >> arry[i];
	}

	long long x = 0, y = 0;
	sort(arrx, arrx + n);
	sort(arry, arry + n);

	x = arrx[(n - 1) / 2];
	y = arry[(n - 1) / 2];

	long long sum = 0;
	for (int i = 0; i < n; i++) {
		sum += (abs(arrx[i] - x) + abs(arry[i] - y));
	}
	cout << sum;

	return 0;
}