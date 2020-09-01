#include <iostream>
#include <algorithm>

int main(void) {
	int n,h;
	int i = 0;
	int chain=0;

	std::cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	std::sort(arr, arr + n - 1);

	for (int i = 0; i < n; i++) {
		h = n - i - 1;
		chain += arr[i];
		if (chain >= h) {
			std::cout << h;
			break;
		}
	}

	return 0;



}
