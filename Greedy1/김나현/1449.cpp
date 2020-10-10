//1449 ¼ö¸®°ø Ç×½Â
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int N, L;
	cin >> N >> L;
	int* point = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> point[i];
	}
	sort(point, point + N);
	int sum = 0;
	int temp = point[0];
	for (int i = 0; i < N; i++) {
		while (point[i] - temp <= L - 1) {
			i++;
		}
		sum += 1;
		temp = point[i];
		i--;
	}
	
	cout << sum;
	return 0;
}