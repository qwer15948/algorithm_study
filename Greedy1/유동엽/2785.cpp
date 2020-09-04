#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	int remain = n;
	int cnt= remain -1;
	int chain[n];
	for(int i=0; i<n; i++) {
		cin >> chain[i];
	}
	sort(chain, chain+n);
	
	for(int i=0; i<n; i++) {
		if(remain > chain[i]+1) {
			remain -= (chain[i]+1);
			cnt--;
			if(remain == 1) break;
		}
	}
	cout << cnt << endl;
}
