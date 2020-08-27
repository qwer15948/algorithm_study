#include <iostream>
#include <algorithm>
#include <tuple>

using namespace std;

typedef tuple <int, int> Tuple;

bool compare(Tuple a, Tuple b) 
{  
    if(get<0>(a) > get<0>(b))
        return true;
    else
        return false;
}

int main(void)
{
	int n, g, sum = 0;
	cin >> n >> g;
	int t[n];
	Tuple* sub1 = new Tuple[n-1];
	int sub2[n-1];
	int pivot[g-1];
	for(int i=0; i<n; i++) cin >> t[i];  
	for(int i=0; i<n-1; i++) {
		get<0>(sub1[i]) = t[i+1] - t[i];
		get<1>(sub1[i]) = i;
	}
	for(int i=0; i<n-1; i++) sub2[i] = t[i+1] - t[i];
	sort(sub1, sub1 + (n-1), compare);
	
	for(int i=0; i<g-1; i++) {
		pivot[i] = get<1>(sub1[i]);
	}
	for(int i = 0; i<g-1; i++) sub2[pivot[i]] = 0;
	for(int i = 0; i<n-1; i++) sum+= sub2[i];
	cout << sum << endl;
	return 0;
}
