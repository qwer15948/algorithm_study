#include <iostream>
#include <vector>
using namespace std;

int main() {

	long long T;
	cin >> T;//test case number

	vector<long long> v;

	
	long long days;//각 테스트 케이스의 일수

	for (long long i = 0; i < T; i++) {
		v.clear();
		cin >> days;
		long long stock;//주가
		for (long long j = 0; j < days; j++) {
			cin >> stock;
			v.push_back(stock);
		}
		long long sum = 0;
		long long max = 0;
		long long k;
		for (k = v.size() - 1; k >= 0; k--) {
			if (v[k] > max) {
				max = v[k];
			}
			else
				sum += (max-v[k]);
		}
		cout << sum << endl;
	}
	return 0;
}