//3042
#include <iostream>
#include <tuple>
#include <algorithm>

using namespace std;


typedef tuple <int, int> Trinet;

bool ccw(int x1, int y1, int x2, int y2, int x3, int y3) {
    int ret = x1*y2 + x2*y3 + x3*y1;
    ret -= (y1*x2 + y2*x3 + y3*x1);
    if (!ret) return true;
    return false;
}

int main(void)
{
	int n =0;
	int c =0; 
	char check;
	cin >> n;
	Trinet* arr = new Trinet[40000];
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cin >> check;
			if(check != 46) {
				get<0>(arr[c]) = i;
				get<1>(arr[c]) = j;
				c++;
			}
		}
	}
	sort(arr, arr+c);
	int ans = 0;	
	for(int i=0; i<c; i++) {
		for(int j=i+1; j<c; j++) {
			for(int k=j+1; k<c; k++) {
				if(ccw(get<0>(arr[i]),get<1>(arr[i]),get<0>(arr[j]),get<1>(arr[j]),get<0>(arr[k]),get<1>(arr[k]))) ans++;
			}
		}
	}
		
	
	cout << ans << endl;
	return 0;
}
	
	
