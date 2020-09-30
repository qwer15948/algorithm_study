#include <iostream>
#include <cstdio>
using namespace std;

int main() {

	long long n;
	cin >> n;

	int* first = new int[n];
	int* final = new int[n];
	int* temp = new int[n];

	for (int i = 0; i < n; i++)
		scanf("%1d", &first[i]);
	for (int i = 0; i < n; i++)
		scanf("%1d", &final[i]);
	for (int i = 0; i < n; i++)
		temp[i] = first[i];

	long long count1 = 1;//0번째 전구 눌렀을 때
	long long count2 = 0;//0번째 전구 안눌렀을 때

	first[0] = !first[0];
	first[1] = !first[1];
	for (int i = 1; i < n; i++) {//0번째 눌렀을 때
		if (i == n-1) {
			if (first[i - 1] != final[i - 1]) {
				first[i - 1] = !first[i - 1];
				first[i] = !first[i];
				count1++;
			}
			break;
		}
		if (first[i - 1] != final[i - 1]) {
			first[i - 1] = !first[i - 1];
			first[i] = !first[i];
			first[i + 1] = !first[i + 1];
			count1++;
		}
	}

	for (int i = 1; i < n; i++) {//0번째 안 눌렀을 때
		if (i == n-1) {
			if (temp[i - 1] != final[i - 1]) {
				temp[i - 1] = !temp[i - 1];
				temp[i] = !temp[i];
				count2++;
			}
			break;
		}
		if (temp[i - 1] != final[i - 1]) {
			temp[i - 1] = !temp[i - 1];
			temp[i] = !temp[i];
			temp[i + 1] = !temp[i + 1];
			count2++;
		}
	}

	int yesorno1;
	int yesorno2;
	int i;
	for (i = 0; i < n; i++) {
		if (first[i] != final[i]) {
			yesorno1 = 0;
			break;
		}
	}
	if (i == n) yesorno1 = 1;

	for (i = 0; i < n; i++) {
		if (temp[i] != final[i]) {
			yesorno2 = 0;
			break;
		}
	}
	if (i == n) yesorno2 = 1;

	if (yesorno1 == 0) {
		if (yesorno2 == 0) {
			cout << -1;
			return 0;
		}
		if (yesorno2 == 1) {
			cout << count2;
			return 0;
		}
	}
	else {
		if (yesorno2 == 0) {
			cout << count1;
			return 0;
		}
		if (yesorno2 == 1) {
			if (yesorno2 > yesorno1) {
				cout << count1;
				return 0;
			}
			else {
				cout << count2;
				return 0;
			}
		}
	}


	return 0;
}