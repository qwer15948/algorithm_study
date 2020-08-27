#include <iostream>
#include <algorithm>
#include <tuple>

using namespace std;

typedef tuple <long long, long long> Stock;

bool compare(Stock a, Stock b) 
{  
    if(get<0>(a) > get<0>(b))
        return true;
    else
        return false;
}

int main(void)
{
	long long n;
	cin >> n;
	long long result[n];
	for(long long i=0; i<n; i++) {
		long long sum=0;
		long long day = 0;
		cin >> day;
		long long stock1[day];
		Stock* stock2 = new Stock[day];
		for(long long j=0; j<day; j++) cin >> stock1[j];
		for(long long j=0; j<day; j++) {
			get<0>(stock2[j]) = stock1[j];
			get<1>(stock2[j]) = j;
		}
		sort(stock2, stock2+day, compare);
		long long index = 0;
		long long max;
		
		
		for(long long j=0; j<day; j++) {
			max = get<1>(stock2[index]);
			if(j != max) sum += stock1[max] - stock1[j];
			else {
				for(long long k = 0; k <day; k++) {
					if(max < get<1>(stock2[k])) {
						index = k;
						break;
					}
				}
			}
			
		}
		result[i] = sum;
	}
	for(long long i=0; i<n; i++) cout << result[i] << endl;
	return 0;
}
