#include <iostream>
#include <tuple>
#include <algorithm>
using namespace std;
typedef tuple<long, long> Conference;
bool compare(Conference a, Conference b) 
{  
    if(get<1>(a) < get<1>(b))
        return true;
    else if(get<1>(a) == get<1>(b))
    	return (get<0>(a) < get<0>(b));
    else    
		return false;
}
main(void)
{
	long long n;
	long long end = 0;
	int num = 0;
	cin >> n;
	Conference* cnf = new Conference[n];
	
	for(long long i=0; i<n; i++) {
		cin >> get<0>(cnf[i]) >> get<1>(cnf[i]);
	}
	sort(cnf, cnf+n, compare);
	for(long long i=0; i<n; i++) {
		if(get<0>(cnf[i]) >= end) {
			end = get<1>(cnf[i]);
			num ++;
		}
	}
	cout << num;	
	return 0;
}
