//Memory usage: 17896KB, Time required : 1804ms
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(const pair<int, int> &v1, const pair<int,int> &v2)
{
    return v1.second > v2.second;
}

int main(void)
{
    int T;
    scanf("%d", &T);
    long long int result[T];
    
    for(int test_case = 0; test_case < T; ++test_case){
        int N;
        scanf("%d", &N);
        int price[N];
        vector<pair<int, int>> peak(N);
        for(int i=0; i<N; ++i) {
            scanf("%d", &price[i]);
            peak[i].first = i;
            peak[i].second = price[i];
        }
        sort(peak.begin(), peak.end(), cmp);
        int peak_ad = 0;
        
        result[test_case] = 0;
        for(int i=0; i<N; ++i){
            for(; peak[peak_ad].first < i; peak_ad++);
            
            for(int j=i; j<peak[peak_ad].first; ++j) result[test_case] += peak[peak_ad].second - price[j];
            
            i = peak[peak_ad].first;
        }
        
    }
    
    for(int i=0; i<T; ++i)
        printf("%lld\n", result[i]);
    
    return 0;
}
