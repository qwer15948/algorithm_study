//Memory usage: 3812KB, Time required : 116ms
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);
    int chain[N];
    for(int i=0; i<N; ++i) scanf("%d", &chain[i]);
    sort(chain, chain + N);
    
    int rest = N-1, count = 0;
    for(int i=0; i<N && rest>0; ++i) {
        if(chain[i]<rest) {
            rest -= chain[i] + 1;
            count += chain[i];
        }
    }
    
    if(rest>0) cout<<count+rest<<endl;
    else cout<<count<<endl;
    
    return 0;
}
