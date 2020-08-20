//memory usage : 1984KB, Time required: 0ms
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);
    int P[N];
    for(int i=0; i<N; ++i) scanf("%d", &P[i]);
    sort(P, P+N);
    
    int Answer=0;
    for(int i=0; i<N; ++i)
        Answer += P[i]*(N-i);
    
    cout<<Answer<<endl;
    
    return 0;
}
