#include <iostream>
using namespace std;

int price[1000000];
int T, N;

int main()
{
	cin >> T;
	
	for (int i = 0; i < T; i++) {	 
		cin >> N; // 2 <= N <= 1,000,000	
		
		//1. 입력받는다.
		for (int j = 0; j < N; j++) {
			cin >> price[j];
		}
		
		//2. 뒤에서부터 조사한다.
		int max = 0;
		long long answer = 0;
		for (int j = N - 1; j >= 0; j--) {
			
			if (price[j] >= max) {
				//3. 올라가면 max값을 갱신한다.
				max = price[j];
			}
			else {
				//4. 내려가면 max값 - 현재값 만큼 더한다.
				answer += max - price[j];
			}
		}
		cout << answer << '\n';
	}
}
