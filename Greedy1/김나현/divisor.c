#include <stdio.h>

int* getdivisors(int a) {
	int divisors[100] = { 0, };
	int j = 0;
	int i;
	for (i = 1; i <= a; i++) {
		if (a % i == 0) {
			divisors[j] = i;
			j++;
		}
	}
	return divisors;
}

int isdivisor(int a, int b) {
	int* temp = getdivisors(b);
	int num = 0;
	if (b % a == 0) {
		for (int i = 0; i < 100; i++) {
			if (temp[i] == a) {
				num = i;
				break;
			}
		}
		return num + 1;
	}
	return 0;
}

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	if (a == 0)
		printf("%d", -1);
	else if (isdivisor(a, b))
		printf("%d", isdivisor(a, b));
	else
		printf("%d", -1);
	return 0;
}