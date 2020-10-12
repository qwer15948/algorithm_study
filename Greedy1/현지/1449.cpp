#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, L;
	int location[1000];
	
	cin >> N >> L;
	for (int i = 0; i < N; i++)
	{
		cin >> location[i];
	}
	
	sort(location, location + N);
	
	int x = location[0];
	int answer = 1;
	for (int i = 0; i < N; i++)
	{
		if (location[i] >= x + L)
		{
			x = location[i];
			answer++;
		}
	}
	
	cout << answer;
}
