//Memory usage: 2156KB, Time required : 4ms
#include <iostream>
using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);
    char bulb0[N], bulb1[N],after[N];
    scanf("%s", bulb0);
    scanf("%s", after);
    for(int i=0; i<N; ++i) bulb1[i] = bulb0[i];
    
    bulb1[0] = 48 + !(bulb1[0] - 48);
    bulb1[1] = 48 + !(bulb1[1] - 48);
    
    int count_0 = 0, count_1 = 1;
    for(int i=0; i<N-2; ++i){
        if(bulb0[i]!=after[i]){
            for(int j=i; j<i+3; ++j)
                bulb0[j] = 48 + !(bulb0[j] - 48);
            count_0++;
        }
        if(bulb1[i]!=after[i]){
            for(int j=i; j<i+3; ++j)
                bulb1[j] = 48 + !(bulb1[j] - 48);
            count_1++;
        }
    }
    
    int result = 200000;
    for(int i=N-2; i<N; ++i){
        if(bulb0[N-2] != after[N-2] && bulb0[N-1] != after[N-1]){
            result = count_0 + 1;
        }
        else if(bulb0[N-2] == after[N-2] && bulb0[N-1] == after[N-1]){
            result = count_0;
        }
        
        if(bulb1[N-2] != after[N-2] && bulb1[N-1] != after[N-1]){
            if(count_1 + 1 < result) result = count_1 + 1;
        }
        else if(bulb1[N-2] != after[N-2] && bulb1[N-1] != after[N-1]){
            if(count_1 < result) result = count_1;
        }
    }
    if(result == 200000) cout<<-1<<endl;
    else cout<<result<<endl;
    
    return 0;
}
