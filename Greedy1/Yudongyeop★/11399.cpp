#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
	int n, sum=0;
	int k = 1;
	cin >> n;
	int res[n];
	for(int i=0; i<n; i++) cin >> res[i];
	sort(res, res+n);
	while(k != n+1) {
		for(int i=0; i<k; i++)
			sum += res[i];
		k++;	
	}
	 cout << sum << endl;
	return 0;
}
