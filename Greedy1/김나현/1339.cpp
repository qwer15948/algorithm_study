//단어수학
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool compare1(string a, string b) {
	return a.length() > b.length();
}
bool compare2(int a, int b) {
	return a > b;
}
int main() {

	int n;
	cin >> n;
	string* arr = new string[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n, compare1);
	int alpha[26] = { 0, };
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < arr[i].length(); j++) {
			alpha[arr[i][j]-65] += pow(10, (arr[i].length() - (j + 1)));
		}
	}
	sort(alpha, alpha + 26, compare2);
	int temp = 9;
	for (int i = 0; i < 26; i++) {
		alpha[i] *= temp;
		temp--;
	}
	int sum = 0;
	for (int i = 0; i < 26; i++) {
		sum += alpha[i];
	}
	cout << sum;
	return 0;
}