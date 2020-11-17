//Memory usage: 1228KB, Time required: 4352ms
#include <stdio.h>
#include <vector>
#include <cmath>
using namespace std;

int N;
vector<int> chk;

int DFS(int row)
{
    int count = 0, i;
    
    if(row==N){
        for(int col=1;col <= N; ++col) {
            for(i=1; i<row && !(chk[i] == col || row-i == abs(chk[i]-col)); ++i);
            
            if(i==row){
                count++;
            }
        }
        return count;
    }
    
    for(int col=1;col <= N; ++col) {
        for(i=1; i<row && !(chk[i] == col || row-i == abs(chk[i]-col)); ++i);
        
        if(i==row){
            chk[row] = col;
            count += DFS(row+1);
            chk[row] = 0;
        }
    }
    
    return count;
}

int main(void)
{
    scanf("%d", &N);
    chk.assign(N+1, 0);
    int result = DFS(1);
    
    printf("%d\n", result);
    
    return 0;
}
