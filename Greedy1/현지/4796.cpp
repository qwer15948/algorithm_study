#include <iostream>
using namespace std;

int main()
{
	int L, P, V;
	cin >> L >> P >> V;
	
	int testcase = 1;
	while (!(L == 0 && P == 0 && V == 0))
	{
		int answer = (V / P) * L;
		if (V % P < L)
		{
			answer += V % P;
		}
		else // V % P >= L
		{
			answer += L;
		}
		
		cout << "Case " << testcase++ << ": " << answer << endl;
		cin >> L >> P >> V;
	}
}
