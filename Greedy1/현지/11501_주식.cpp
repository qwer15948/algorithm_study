#include <iostream>
using namespace std;

int price[1000000];
int T, N;

int main()
{
	cin >> T;
	
	for (int i = 0; i < T; i++) {	 
		cin >> N; // 2 <= N <= 1,000,000	
		
		//1. �Է¹޴´�.
		for (int j = 0; j < N; j++) {
			cin >> price[j];
		}
		
		//2. �ڿ������� �����Ѵ�.
		int max = 0;
		long long answer = 0;
		for (int j = N - 1; j >= 0; j--) {
			
			if (price[j] >= max) {
				//3. �ö󰡸� max���� �����Ѵ�.
				max = price[j];
			}
			else {
				//4. �������� max�� - ���簪 ��ŭ ���Ѵ�.
				answer += max - price[j];
			}
		}
		cout << answer << '\n';
	}
}
