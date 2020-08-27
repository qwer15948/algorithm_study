#include <iostream>
using namespace std;
int main(void)
{
	int n, k, sum, num =0;
	cin >> n >> k;
	int wallet[n];
	for(int i=0; i<n; i++) cin >> wallet[i];
	for(int i=n-1; i>=0; i--) {
		while(k - wallet[i] >= 0) {
			num++;
			k -= wallet[i];
		}
	}
	cout << num;
	return 0;
}
