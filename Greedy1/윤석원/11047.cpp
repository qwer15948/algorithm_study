//memory usage : 1984KB, Time required: 0ms
#include <iostream>
using namespace std;

int main(void)
{
    int N, K;
    scanf("%d%d", &N, &K);
    int coin[N];
    for(int i=0; i<N; ++i)
        scanf("%d", &coin[i]);
    
    int count=0;
    for(int i=N-1;i>=0 && K>0; --i)
        if(K/coin[i]>0){
            count += K/coin[i];
            K %= coin[i];
            
        }
    
    
    cout<<count<<endl;
    
    return 0;
}
