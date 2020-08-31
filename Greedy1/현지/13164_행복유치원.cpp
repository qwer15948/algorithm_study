#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;
	
	int gap[300000]; 
	
	// �������� Ű ���� ���ϱ� 
	int first, second;
	cin >> first;
	for (int i = 0; i < N - 1; i++)
	{
		cin >> second;
		gap[i] = second - first;
		first = second;
	}
	
	//Ű ���̰� ���� ������� ���� 
	sort(gap, gap + (N - 1));
	
	//Ű ���̰� ���� ū (k - 1)���� �����ϰ� �� ���� 
	int answer = 0;
	for (int i = 0; i < N - K; i++)
	{
		answer += gap[i];
	}	
	cout << answer << endl;
}
