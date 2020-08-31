#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	long long n;

	cin >> n;

	long long j;
	vector<long long> v;
	
	for (int i = 0; i < n; i++) {
		cin >> j;
		v.push_back(j);
	}
	sort(v.begin(), v.end());

	long long temp = n - 1;
	long long sum = 0;
	vector<long long>::iterator it = v.begin();

	for (int i= 0; i < v.size(); i++) {
		if (v[i] <= temp) {
			temp -= v[i];
			sum += v[i];
			it += i;
			it=v.erase(it);
			i--;
			temp--;
		}
		if (temp <= 0) {
			cout << sum;
			return 0;
		}
	}

	if (temp != 0) {
		for (int i = 0; i < v.size(); i++) {
			for (int j = 0; j < v[i]; j++) {
				temp--;
				v[i]--;
				sum++;
				if (temp == 0) {
					cout << sum;
					return 0;
				}
			}
		}
	}

	return 0;
}