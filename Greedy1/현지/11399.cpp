#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	vector< int > P;

	cin >> N;
	P.resize(N);
	for (int i = 0; i < N; i++)
	{
		cin >> P[i];
	}

	sort(P.begin(), P.end());

	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += P[i] * (N - i);
	}

	cout << sum << endl;
}