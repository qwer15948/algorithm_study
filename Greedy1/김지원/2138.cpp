#include <stdio.h>
#define MIN(a,b) ((a)<(b)?(a):(b))

constexpr int MAX_SIZE = 100000;

int first[MAX_SIZE];
int copyFirst[MAX_SIZE];

int second[MAX_SIZE];

int N;

void push(int blubArray[], int switchNum)
{
	for (int i = switchNum - 1; i <= switchNum + 1; i++)
	{
		if (i >= 0 && i < N)
		{
			blubArray[i] = 1 - blubArray[i];
		}
	}
}

bool go(int blubArray[], int targetBlubArray[], int& result)
{
	int ans = 0;

	for (register int i = 1; i < N; i++)
	{
		if (blubArray[i-1] != targetBlubArray[i-1])
		{
			push(blubArray, i);
			ans++;
		}
	}
	result = ans;

	for (register int i = 0; i < N; i++)
	{
		if (blubArray[i] != targetBlubArray[i])
		{
			return false;
		}
	}

	return true;
}

int main(void)
{
	int ans = -1;
	int nowAns = 0;

	scanf("%d", &N);

	for (register int i = 0; i < N; i++)
	{
		scanf("%1d", &first[i]);
		copyFirst[i] = first[i];
	}

	for (register int i = 0; i < N; i++) 
		scanf("%1d", &second[i]);

	if (go(first, second, nowAns))
	{
		if (ans == -1) ans = nowAns;
		else ans = MIN(ans, nowAns);
	}
	
	push(copyFirst, 0);
	nowAns = 1;

	if(go(copyFirst, second, nowAns))
	{
		nowAns++;
		if (ans == -1) ans = nowAns;
		else ans = MIN(ans, nowAns);
	}

	printf("%d\n", ans);

	return 0;
}
