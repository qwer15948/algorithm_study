#include <stdio.h>

int main() {
	int n, k = 0, i, j;
	int get[1024];
	int sum = 0;
	int min;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &get[i]);
	}


	for (i = 0; i < n; i++) {
		for (j = i; j < n; j++) {
			if (get[i] >= get[j]) {
				min = get[j];
				get[j] = get[i];
				get[i] = min;
			}
		}
	}

	for (j = 0; j < n; j++) {
		sum = sum + get[j] * (n - j);
	}

	printf("%d", sum);


	return 0;
}