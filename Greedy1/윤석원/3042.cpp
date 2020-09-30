// Memory usage: 1984KB, Time required: 0ms
#include <iostream>
#include <vector>
using namespace std;



int main(void)
{
    int N;
    scanf("%d", &N);
    vector<pair<double,double>> loc;
    char map[N];
    for(int i=0; i<N; ++i){
        scanf("%s", map);
        for(int j=0; j<N; ++j)
            if(map[j]!='.') loc.push_back(make_pair(j, -i));
    }
    
    int count = 0;
    for(int i=0; i<loc.size(); ++i){
        for(int j=i+1; j<loc.size(); ++j){
            for(int k=j+1; k<loc.size(); ++k){
                if(loc[i].first==loc[j].first && loc[k].first==loc[i].first) count++;
                
                else{
                    double grad = (loc[i].second-loc[j].second)/(loc[i].first-loc[j].first);
                    if(grad*(loc[k].first-loc[i].first)+loc[i].second==loc[k].second) count++;
                }
            }
        }
    }
    
    cout<<count<<endl;
    
    return 0;
}
