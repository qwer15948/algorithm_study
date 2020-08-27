//Memory usage: 3036KB, Time required : 76ms
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int N, K;
    scanf("%d%d", &N, &K);
    int diff[N];
    scanf("%d",&diff[0]);
    for(int i=1; i<N; ++i){
        scanf("%d", &diff[i]);
        diff[i-1] = diff[i] - diff[i-1];
    }
    sort(diff, diff+N-1);
    long long int result = 0;
    for(int i=0; i<N-K; ++i) result += diff[i];
    
    printf("%lld\n", result);
    
    return 0;
}
