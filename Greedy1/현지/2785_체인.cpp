#include <stdio.h>
#include <algorithm>
using namespace std;

int chain[500000];

int main()
{
	int N; // 2 <= N <= 500000
	scanf("%d", &N);
	
	for (int i  = 0; i < N; i++)
	{
		scanf("%d", chain + i);
	}
	
	sort(chain, chain + N);
	
	int answer = 0;
	int num = N - 1; // 체인의 개수 
	for (int i = 0; ; i++)
	{
		if (num - i >= chain[i] + 1)
		{
			answer += chain[i];
			for (int j = 0; j < chain[i]; j++)
			{
				chain[num - 1] += chain[num];
				num--;
			}		
		}
		else
		{
			answer += num - i;
			break;
		}
	}
	printf("%d\n", answer);
}
