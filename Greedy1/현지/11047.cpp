#include <stdio.h>

int main()
{
	int N, K;
	int A[10];

	scanf("%d %d", &N, &K);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
	}

	int count = 0;
	for (int i = N - 1; (i >= 0) && (K != 0); i--)
	{
		count += K / A[i];
		K = K % A[i];
	}

	printf("%d\n", count);
}