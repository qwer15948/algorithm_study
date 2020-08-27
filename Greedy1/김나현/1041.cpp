#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	long long n;
	cin >> n;

	long long arr[6];
	for (int i = 0; i < 6; i++)
		cin >> arr[i];

	if (n == 1) {
		sort(arr, arr + 6);
		cout << arr[0] + arr[1] + arr[2] + arr[3] + arr[4] << endl;
		return 0;
	}

	long long n3 = 4;//3면 개수
	long long n2 = 8 * n - 12;//2면 개수
	long long n1 = n * n * 5 - (2 * n2 + 3 * n3);//1면 개수

	long long arr3[8] = {arr[0]+arr[1]+arr[2], arr[0] + arr[1] + arr[3], arr[0] + arr[2] + arr[4], arr[0] + arr[3] + arr[4], arr[1] + arr[2] + arr[5], arr[1] + arr[3] + arr[5], arr[2] + arr[4] + arr[5], arr[3] + arr[4] + arr[5], };
	long long value1;//1면일 때 최소값
	long long value2;//2면일 때 최소값
	long long value3;//3면일 때 최소값
	long long temp = 101;

	//value3 구하기
	sort(arr3, arr3+8);
	value3 = arr3[0];

	//value2 구하기
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 6; j++) {
			if ((i == 0 && j == 5) || (i == 1 && j == 4) || (i == 2 && j == 3)) {}
			else
				temp = min(arr[i] + arr[j], temp);
		}
	}
	value2 = temp;

	//value1 구하기
	sort(arr, arr + 6);
	value1 = arr[0];

	cout << value1 * n1 + value2 * n2 + value3 * n3 << endl;
	return 0;
}