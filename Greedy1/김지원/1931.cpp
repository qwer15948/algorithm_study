#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, cou = 0, mini = -1;

int main() {

	cin >> n;

	vector<pair<int, int>> get(n);

	for (int i = 0; i < n; i++)
		cin >> get[i].second >> get[i].first;

	sort(get.begin(), get.end());

	for(int i=0;i<n;i++)
		if (mini <= get[i].second) {
			mini = get[i].first;
			cou++;
		}
	
	cout << cou << endl;

	return 0;

}