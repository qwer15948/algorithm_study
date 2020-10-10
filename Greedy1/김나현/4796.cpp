//д╥гн
#include <iostream>
using namespace std;

int main() {
	int L, P, V, sum = 0, count = 0;
	while (1) {
		sum = 0;
		cin >> L >> P >> V;
		if (L == 0 && P == 0 && V == 0)
			break;
		else {
			int temp = V / P;
			int remain = V % P;
			sum += temp * L;
			if (remain <= L)
				sum += remain;
			else
				sum += L;
			count += 1;
			cout << "Case " << count << ": " << sum << endl;
		}
	}
	return 0;
}