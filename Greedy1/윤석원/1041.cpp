//Memory usage: 1984KB, Time required : 0ms
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(void)
{
    unsigned long long N;
    int num[6];
    cin>>N;
    for(int i=0; i<6; ++i)
        cin>>num[i];
    //0-5, 1-4, 2-3
    
    if(N==1){
        sort(num, num+6);
        cout<<num[0]+num[1]+num[2]+num[3]+num[4]<<endl;
        return 0;
    }
    
    int t_edge_low=10000000, d_edge_low=10000000;;
    for(int i=0; i<6; ++i){
        //i: index of e-t
        for(int j=0; j<6; ++j){
            if(i!=j && 5-i!=j){
                int edge = num[i] + num[j];
                if(edge<d_edge_low) d_edge_low = edge;
            }
            for(int k=0; k<6; ++k){
                if(i!=j && 5-i!=j && i!=k && 5-i!=k && j!=k && 5-j!=k){
                    int edge = num[i] + num[j] + num[k];
                    if(edge<t_edge_low) t_edge_low = edge;
                }
            }
        }
    }
    
    int l_v = 10000000;
    for(int i=0; i<6; ++i)
        if(num[i]<l_v) l_v = num[i];
    
    
    unsigned long long result = (unsigned long long)d_edge_low*((N-1)*4 + (N-2)*4) + (unsigned long long)l_v*((N-1)*(N-2)*4 + (N-2)*(N-2)) + (unsigned long long)t_edge_low*4;
    
    cout<<result<<endl;
    
    return 0;
}
