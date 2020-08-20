#include <stdio.h>

int main() {
	int n;
	long long int k;
	int m[11];
	int count = 0;
	scanf("%d %lld", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d", &m[i]);
	}
	for (int j = n - 1; j >= 0; j--) {
		count += k / m[j];
		k = k % m[j];
	}
	printf("%d", count);
	return 0;
}