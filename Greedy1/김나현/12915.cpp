#include <iostream>
using namespace std;

int main() {

	long long arr[5];

	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}

	int e = 0, m = 0, h = 0;
	long long max = 0;

	while(1) {
		if (e == 0) {//e
			if (arr[0] > 0 || arr[1] > 0) {
				if (arr[0] >= arr[1]) {
					arr[0]--;
					e++;
				}
				else {
					arr[1]--;
					e++;
				}
			}
		}
		if (m == 0) {//m
			if (arr[1] > 0 || arr[2] > 0 || arr[3] > 0) {
				if (arr[2] != 0) {
					arr[2]--;
					m++;
				}
				else if (arr[1] >= arr[3]) {
						arr[1]--;
						m++;
					}
					else {
						arr[3]--;
						m++;
					}
			}
		}
		if (h == 0) {//h
			if (arr[4] > 0 || arr[3] > 0) {
				if (arr[4] >= arr[3]) {
					arr[4]--;
					h++;
				}
				else {
					arr[3]--;
					h++;
				}
			}
		}
		if (e == 1 && m == 1 && h == 1) {
			max++;
			e = 0; m = 0; h = 0;
		}
		if ((arr[0] == 0 && arr[1] == 0) || (arr[3] == 0 && arr[4] == 0) || (arr[1] == 0 && arr[2] == 0 && arr[3]==0))
			break;
	}

	cout << max;
	return 0;
}