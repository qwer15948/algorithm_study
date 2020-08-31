#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;
	
	int gap[300000]; 
	
	// 원생들의 키 차이 구하기 
	int first, second;
	cin >> first;
	for (int i = 0; i < N - 1; i++)
	{
		cin >> second;
		gap[i] = second - first;
		first = second;
	}
	
	//키 차이가 작은 순서대로 정렬 
	sort(gap, gap + (N - 1));
	
	//키 차이가 제일 큰 (k - 1)개를 제외하고 다 더함 
	int answer = 0;
	for (int i = 0; i < N - K; i++)
	{
		answer += gap[i];
	}	
	cout << answer << endl;
}
