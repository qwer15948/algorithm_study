//Memory usage: 1116KB, Time required: 0ms
#include <stdio.h>
using namespace std;

int N, M;
int a[9];
bool visitChk[9] = {0,};

void DFS(int loc)
{
    if(loc==M) {
        for(int i=0; i<M; ++i) printf("%d ", a[i]);
        printf("\n");
    }
    else {
        int i;
        for(i=N; i>0 && !visitChk[i]; --i);
        i++;
        
        for(; i<=N; ++i){
            if(!visitChk[i]){
                visitChk[i] = 1;
                a[loc] = i;
                DFS(loc + 1);
                visitChk[i] = 0;
            }
        }
    }
}

int main(void)
{
    scanf("%d%d", &N, &M);
    
    DFS(0);
    
    return 0;
}

