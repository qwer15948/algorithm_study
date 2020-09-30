#include <iostream>
#include <vector>
//14400
#include <tuple>
#include <algorithm> 

using namespace std;
typedef tuple <int,int> Index;
bool compare(Index a, Index b) 
{  
    if(get<1>(a) < get<1>(b))
        return true;
    else
        return false;
}

int main(void)
{
	long long ans = 0;
	int n;
	cin >> n;
	vector<Index> arr(n);
	
	for(int i=0; i<n; i++) {
		cin >> get<0>(arr[i]);
		cin >> get<1>(arr[i]);
	}
	sort(arr.begin(), arr.end());
    int mx = get<0>(arr[(n-1)/2]);
    sort(arr.begin(),arr.end(),compare);
    int my = get<1>(arr[(n-1)/2]);
	
	for(int j=0; j<n; j++) ans += (abs((mx - get<0>(arr[j]))) + abs(my - get<1>(arr[j])));
	cout << ans << endl;
    return 0;
}
